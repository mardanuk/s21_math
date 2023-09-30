#include "s21_math.h"

long double s21_asin(double x) {
  long double result = S21_NAN;
  if (x == S21_ZERO_POS || x == S21_ZERO_NEG)
    result = x;
  else if (s21_fabs(x) <= 1) {
    result = s21_atan(x / s21_sqrt(1 - x * x));
  }
  return result;
}
