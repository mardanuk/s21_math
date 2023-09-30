#include "s21_math.h"

long double s21_acos(double x) {
  long double result = S21_NAN;
  if (x == 1)
    result = S21_ZERO_POS;
  else {
    long double atanTerm = s21_atan(s21_sqrt(1 - x * x) / x);
    if (x >= 0 && x <= 1) {
      result = atanTerm;
    } else if (x >= -1 && x < 0) {
      result = S21_PI + atanTerm;
    }
  }
  return result;
}