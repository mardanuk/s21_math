#include "s21_math.h"

long double s21_floor(double x) {
  long double result = s21_trunc(x);
  if (x < 0.0 && result != x && !S21_IS_NAN(x) && !S21_IS_INF(x))
    result -= 1;
  else if (S21_IS_NAN(x))
    result = S21_NAN;
  return result;
}
