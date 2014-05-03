#include "get_answer.h"
#include "operands.h"

int get_answer(int *parts, int operand){
  if(operand & OP_ADD) {
    return parts[0] + parts[1];
  } else if(operand & OP_SUBTRACT) {
    return parts[0] - parts[1];
  } else if(operand & OP_MULTIPLY) {
    return parts[0] * parts[1];
  } else if(operand & OP_DIVIDE) {
    return parts[0] / parts[1];
  }
  return 0;
}
