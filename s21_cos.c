#include "s21_math.h"

long double s21_cos(double x) {
  long double result = S21_NAN;
  if (!S21_IS_INF(x) && !S21_IS_NAN(x)) result = s21_sin(S21_PI / 2 - x);
  return result;
}
