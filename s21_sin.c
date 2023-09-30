#include "s21_math.h"

long double s21_sin(double x) {
  int parity = 1;
  x = s21_fmod(x, 2 * S21_PI);
  double xx = x * x;
  long double prevTerm = x, result = prevTerm;
  if (x < 0) parity = 2;
  for (int i = 1; i < 500; i = i + 2) {
    int iTerm1 = i + 1.0, iTerm2 = i + 2.0, sign;
    sign = parity % 2 == 0 ? 1 : -1;
    result += sign * s21_fabs(prevTerm * xx / (iTerm1 * iTerm2));
    prevTerm = sign * s21_fabs(prevTerm * xx / (iTerm1 * iTerm2));
    parity++;
  }
  return result;
}
