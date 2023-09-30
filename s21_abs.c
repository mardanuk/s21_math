#include "s21_math.h"

int s21_abs(int x) {
  int result;
  if (x == INT_MIN)
    result = x;
  else
    result = x >= 0 ? x : -x;
  return result;
}