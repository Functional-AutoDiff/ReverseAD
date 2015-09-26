#ifndef SINGLE_DERIVATIVE_H_
#define SINGLE_DERIVATIVE_H_

#include "reversead/algorithm/trivial_adjoint.hpp"
#include "reversead/algorithm/trivial_hessian.hpp"
#include "reversead/reversead_base.hpp"
#include "reversead/logger.hpp"

namespace ReverseAD {

template <typename Base>
class SingleDerivative : AbstractSerializable{
 public:

  typedef TrivialAdjoint<locint, Base> type_adjoint;
  typedef TrivialHessian<locint, Base> type_hessian;

  SingleDerivative() {
    adjoint_vals = new type_adjoint();
    hessian_vals = new type_hessian();
  }

  SingleDerivative(char* buf) {
    int buf_size = 0;
    adjoint_vals = new type_adjoint(buf);
    buf_size += adjoint_vals->byte_size();
    hessian_vals = new type_hessian(&(buf[buf_size]));
  }

  int byte_size() const {
    int ret = adjoint_vals->byte_size();
    if (hessian_vals) {
      ret += hessian_vals->byte_size();
    }
    return ret;
  }

  void write_to_byte(char* const buf) const {
    int buf_size = 0;
    adjoint_vals->write_to_byte(buf);
    buf_size = adjoint_vals->byte_size();
    hessian_vals->write_to_byte(&buf[buf_size]);
  }
  
  void debug() const {
    debug(log.info);
  }
  void debug(Logger& logger) const {
    adjoint_vals->debug(log.info);
    hessian_vals->debug(log.info);
  }
  type_adjoint* adjoint_vals;
  type_hessian* hessian_vals;
};

}

#endif // SINGLE_DERIVATIVE_H_