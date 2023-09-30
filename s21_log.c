#include "s21_math.h"

long double s21_log(double x) {
  int ePow = 0;
  int boundary = 100;
  long double result = 0, n;
  if (x == 0)
    result = S21_INF_NEG;
  else if (x < 0 || x != x)
    result = S21_NAN;
  else if (x > DBL_MAX)
    result = S21_INF_POS;
  else {
    for (; x >= S21_E; x /= S21_E) ePow++;
    for (int i = 0; i < boundary; i++) {
      n = result;
      result = n + 2 * (x - s21_exp(n)) / (x + s21_exp(n));
      if (n == result) i = boundary + 1;
    }
    result += ePow;
  }
  return (result);
}