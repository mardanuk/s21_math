
#include "s21_math.h"

long double s21_tan(double x) {
  long double result;
  if (x == S21_ZERO_POS || x == S21_ZERO_NEG)
    result = x;
  else if (S21_IS_INF(x))
    result = S21_NAN;
  else
    result = s21_sin(x) / s21_cos(x);
  return result;
}
