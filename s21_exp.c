#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1;
  long double term = 1;
  if (x > 100)
    result = S21_INF_POS;
  else if (x < -22)
    result = 0;
  else if (x == S21_ZERO_NEG || x == S21_ZERO_POS)
    result = 1;
  else {
    for (int i = 1; i < 100; ++i) {
      term *= x / i;
      result += term;
    }
  }
  return result;
}
