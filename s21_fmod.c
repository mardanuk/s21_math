#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result;
  if (x == S21_INF_POS || x == S21_INF_NEG || x == S21_NAN || y == S21_NAN)
    result = S21_NAN;
  else if (y == 0)
    result = S21_NAN;
  else if ((((y > x) && (x > 0 && y > 0)) || y == S21_INF_POS ||
            y == S21_INF_NEG))
    result = x;
  else
    result = (long double)x - s21_trunc(x / y) * (long double)y;

  return result;
}