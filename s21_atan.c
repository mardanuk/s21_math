#include "s21_math.h"

long double s21_atan(double x) {
  long double result = 0;
  int sign = 1;
  long double intermediate_state = S21_ACCURACY + 1;
  if (x == S21_INF_POS) {
    result = S21_PI / 2;
  } else if (x == S21_INF_NEG) {
    result = -S21_PI / 2;
  } else if (x == 1 || x == -1)
    result = x * S21_45_DEGREE_IN_RAD;
  else if (S21_IS_NAN(x)) {
    result = x;
  } else {
    if (s21_fabs(x) > 1) {
      result = (S21_PI * s21_fabs(x)) / (2 * x);
      sign = -1;
    }
    for (int k = 0; k < 500000 && s21_fabs(intermediate_state) >
                                      S21_ACCURACY * S21_ACCURACY;) {
      long double interTerm = s21_fabs(x) > 1 ? (-1 - (2 * k)) : (1 + 2 * k);
      intermediate_state = s21_pow(-1, k) * s21_pow(x, interTerm) / (1 + 2 * k);
      result += sign * intermediate_state;
      k++;
    }
  }
  return result;
}
