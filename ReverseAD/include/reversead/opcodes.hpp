#ifndef OPCODES_H_
#define OPCODES_H_

namespace ReverseAD {

enum OPCODES {
  start_of_tape,
  end_of_tape,
  assign_ind,
  assign_dep,
  assign_a,
  assign_d,
  plus_a_a,
  plus_d_a,
  minus_a_a,
  minus_a_d,
  minus_d_a,
  mult_a_a,
  mult_d_a
};

} // namespace ReverseAD

#endif // OPCODES_H_