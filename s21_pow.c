#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result;
  long double x = base;
  int isNAN = S21_IS_NAN(base) || S21_IS_NAN(exp) ||
              (base < 0 && s21_fmod(exp, 1) != 0 && base != S21_INF_NEG &&
               s21_fabs(exp) != DBL_MAX);
  if (exp == 0)
    result = 1;
  else if (S21_IS_INF(exp) && base == -1)
    result = 1;
  else if (isNAN) {
    result = S21_NAN;
  } else if (exp == 1)
    result = base;
  else if (x < 0) {
    x = -x;
    result = s21_exp(exp * s21_log(x));
    if (exp != S21_INF_POS) {
      if (base == S21_INF_NEG) {
        if (s21_fmod(exp, 1) == 0 && s21_fmod(exp, 2) != 0) result = -result;
      } else if (((s21_fmod(exp, 2) != 0) && s21_fabs(exp) != DBL_MAX) &&
                 exp != S21_INF_NEG)
        result = -result;
    }
  } else
    result = s21_exp(exp * s21_log(base));
  return result;
}
