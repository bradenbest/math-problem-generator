#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "operands.h"
#include "fill_parts.h"
#include "get_answer.h"
#include "operand_chr.h"

int main() {
  int parts[2] = {0};
  int operand;
  int answer;
  int user_answer;

  srand(time(0));

  while(1) {
    fill_parts(parts, CAP);
    operand = 1 << (rand() % 4);
    answer = get_answer(parts, operand);
    printf("%u %c %u = ?", parts[0], operand_chr(operand), parts[1]);
    if (operand_chr(operand) == '/'){
      puts(" (round down)");
    } else {
      printf("\n");
    }
    if(scanf(" %u", &user_answer));
    if(user_answer == answer) {
      printf("Correct\n\n");
    } else {
      printf("Incorrect\nThe correct answer is %u\n\n", answer);
    }
  }
  return 0;
}
