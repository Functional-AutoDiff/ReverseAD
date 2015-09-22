#ifndef ABSTRACT_TAPE_H_
#define ABSTRACT_TAPE_H_

namespace ReverseAD {

template <typename Type>
class AbstractTape {
 public:  
  virtual void clear() = 0;
  // put a Type data to the tape
  virtual void put(Type) = 0;

  // forward sweep
  virtual void init_forward() = 0;
  virtual void end_forward() = 0;
  virtual bool has_next_f() = 0;
  virtual Type get_next_f() = 0;

  // The new feature
  virtual void rewrite_curr_f(Type) = 0;

  // reverse sweep
  virtual void init_reverse() = 0;
  virtual void end_reverse() = 0;
  virtual bool has_next_r() = 0;
  virtual Type get_next_r() = 0;  
  
  // for debug
  virtual void dump_tape() = 0;
};

} // namespace ReverseAD

#endif // ABSTRACT_TAPE_H_