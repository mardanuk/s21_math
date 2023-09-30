#include "s21_math.h"

long double s21_fabs(double x) {
  double result;
  if (S21_IS_INF(x))
    result = S21_INF_POS;
  else if (x == S21_ZERO_NEG || x == S21_ZERO_POS)
    result = S21_ZERO_POS;
  else
    result = x >= 0 ? x : -x;
  return result;
}
