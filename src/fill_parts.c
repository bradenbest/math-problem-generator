#include <stdlib.h>

#include "fill_parts.h"

static int max(int a, int b){
  return a > b ? a : b;
}

static int min(int a, int b){
  return a < b ? a : b;
}

void fill_parts(int *parts, int cap){
  int a = rand() % cap;
  int b = rand() % cap;
  parts[0] = max(a,b);
  parts[1] = min(a,b);
}
