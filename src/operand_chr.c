#include "operand_chr.h"
#include "operands.h"

char operand_chr(int operand){
  char out = '?';
  if(operand & OP_ADD) {
    out = '+';
  } else if(operand & OP_SUBTRACT){
    out = '-';
  } else if(operand & OP_MULTIPLY){
    out = '*';
  } else if(operand & OP_DIVIDE){
    out = '/';
  }
  return out;
}
