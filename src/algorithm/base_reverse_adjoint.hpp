#ifndef BASE_REVERSE_ADJOINT_H_
#define BASE_REVERSE_ADJOINT_H_

#include <vector>
#include <map>
#include <iostream>

#include "src/core/reversead.hpp"
#include "src/core/opcodes.hpp"
#include "src/trace/abstract_trace.hpp"
#include "src/tape/abstract_tape.hpp"
//#include "src/algorithm/abstract_adjoint.hpp"
#include "src/algorithm/trivial_adjoint.hpp"

using std::vector;
using std::map;

namespace ReverseAD {

template <typename Base>
class BaseReverseAdjoint {
 public:
  //typedef map<locint, Base> type_adjoint;
  typedef TrivialAdjoint<locint, Base> type_adjoint;

  BaseReverseAdjoint(AbstractTrace* trace) {
    this->trace = trace;
  }
  Base** compute(Base* adjoint_dep, int ind_num, int dep_num) {
    Base** adjoint_ind = new Base*[dep_num];
    for (int i = 0; i < dep_num; i++) {
      adjoint_ind[i] = new Base[ind_num];
    }
    vector<type_adjoint> adjoint_vals(dep_num);
   
    int ind_count = ind_num - 1;
    int dep_count = 0;

    locint res;
    locint arg1;
    locint arg2;
    double coval;
    Base arg1_val;
    Base arg2_val;

    trace->init_reverse();
    opbyte op = trace->get_next_op_r();

    while (op != start_of_tape) {
      switch (op) {
        case start_of_tape:
        case end_of_tape:
          break;
        case assign_ind:
          if (ind_count < 0) {
            std::cerr << "more independents found on tape than : " << ind_num << std::endl;
            return nullptr;
          }
          res = trace->get_next_loc_r();;
          coval = trace->get_next_val_r();
          for (int i = 0; i < dep_num; i++) {
            adjoint_ind[i][ind_count] = adjoint_vals[i][res];
          }
          ind_count--;
          break;
        case assign_dep:
          if (dep_count >= dep_num) {
            std::cerr << "more dependents found on tape than : " << ind_num << std::endl;
            return nullptr;
          }
          res = trace->get_next_loc_r();
          coval = trace->get_next_val_r();
          adjoint_vals[dep_count][res] = adjoint_dep[dep_count];
          std::cout << "a[" << res << "] = " << adjoint_vals[dep_count][res] << std::endl;
          dep_count++; 
          break;
        case assign_d:
          res = trace->get_next_loc_r();
          coval = trace->get_next_val_r();
          for (type_adjoint& adjoint : adjoint_vals) {
            adjoint.erase(res);
          }
          break;
        case assign_a:
          res = trace->get_next_loc_r();
          arg1 = trace->get_next_loc_r();
          std::cout << "assign_a : " << res << " = " << arg1 << std::endl;
          for (type_adjoint& adjoint : adjoint_vals) {
            Base w = adjoint[res];
            adjoint.erase(res);
            adjoint[arg1] += w;
            std::cout << "res = " << res << " w = " << w << std::endl;
            std::cout << "a[" << arg1 << "] = " << adjoint[arg1] << std::endl;
          }
          break;
        case plus_a_a:
          res = trace->get_next_loc_r();
          arg2 = trace->get_next_loc_r();
          arg1 = trace->get_next_loc_r();
          std::cout << "plus_a_a : " << res << " = " << arg1 << " + " << arg2<< std::endl;
          for (type_adjoint& adjoint : adjoint_vals) {
            Base w = adjoint[res];
            adjoint.erase(res);
            adjoint[arg1] += w;
            adjoint[arg2] += w;
            std::cout << "res = " << res << " w = " << w << std::endl;
            std::cout << "a[" << arg1 << "] = " << adjoint[arg1] << std::endl;
            std::cout << "a[" << arg2 << "] = " << adjoint[arg2] << std::endl;
          }
          break;
        case plus_d_a:
          res = trace->get_next_loc_r();
          coval = trace->get_next_val_r();
          arg1 = trace->get_next_loc_r();
          for (type_adjoint& adjoint : adjoint_vals) {
            Base w = adjoint[res];
            adjoint.erase(res);
            adjoint[arg1] += w;
          }
          break;
        case mult_a_a:
          res = trace->get_next_loc_r();
          arg2 = trace->get_next_loc_r();
          arg1 = trace->get_next_loc_r();
          arg2_val = trace->get_next_val_r();
          arg1_val = trace->get_next_val_r();
          for (type_adjoint& adjoint : adjoint_vals) {
            Base w = adjoint[res];
            adjoint.erase(res);
            adjoint[arg1] += w * arg2_val;
            adjoint[arg2] += w * arg1_val;           
          }
          break;
        case mult_d_a:
          res = trace->get_next_loc_r();
          arg1 = trace->get_next_loc_r();
          coval = trace->get_next_val_r();
          for (type_adjoint& adjoint : adjoint_vals) {
            Base w = adjoint[res];
            adjoint.erase(res);
            adjoint[arg1] += w * coval;
          }
          break;
        default:
          std::cerr << "Unrecongized opcode : " << (int)op << std::endl; 
      }
      op = trace->get_next_op_r();
    }
    return adjoint_ind;
  }
  
 private:
  AbstractTrace* trace;
};

} // namespace ReverseAD

#endif // BASE_FUNCTION_REPLAY_H_