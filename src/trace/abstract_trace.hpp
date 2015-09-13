#ifndef ABSTRACT_TRACE_H_
#define ABSTRACT_TRACE_H_

#include "src/core/reversead.hpp"

namespace ReverseAD {

class AbstractTrace {
 public:
  virtual void putOp(opbyte) = 0;
  virtual void putLoc(locint) = 0;
  virtual void putVal(double) = 0;
  
  // forward sweep
  virtual void init_forward() = 0;
  virtual void end_forward() = 0;
  virtual opbyte get_next_op_f() = 0;
  virtual locint get_next_loc_f() = 0;
  virtual double get_next_val_f() = 0;
  virtual void rewrite_curr_loc_f(locint) = 0;

  // reverse sweep
  virtual void init_reverse() = 0;
  virtual void end_reverse() = 0;
  virtual opbyte get_next_op_r() = 0;
  virtual locint get_next_loc_r() = 0;
  virtual double get_next_val_r() = 0;
};

} // namespace ReverseAD

#endif // ABSTRACT_TRACT_H_
