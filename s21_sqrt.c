#include "s21_math.h"

long double s21_sqrt(double x) {
  double result = S21_ZERO_POS;
  if (x < 0 || S21_IS_NAN(x))
    result = S21_NAN;
  else {
    double low = 0;
    double high = (x < 1) ? 1 : x;
    for (; result == S21_ZERO_POS;) {
      double middle = (low + high) / 2;
      if (middle * middle <= x) {
        if (middle == low) {
          result = middle;
        }
        low = middle;
      } else {
        if (middle == high) {
          result = middle;
        }
        high = middle;
      }
    }
  }
  return result;
}