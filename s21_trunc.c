#include "s21_math.h"

long double s21_trunc(long double x) {
  long double result = x;
  if (!S21_IS_NAN(x) && !S21_IS_INF(x)) result = (long long)x;
  return result;
}