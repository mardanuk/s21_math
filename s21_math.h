#ifndef S21_MATH_H
#define S21_MATH_H

#include <float.h>
#include <limits.h>
#include <stdio.h>

#define HUGE_VALUE_FLOAT 1e50f
#define S21_SMALL_EXP 1e-77
#define S21_45_DEGREE_IN_RAD 0.785398163
#define S21_PI 3.141592653589793238462643383279
#define S21_NAN 0.0 / 0.0
#define S21_HUGE_VALUE_FLOAT HUGE_VALUE_FLOAT
#define S21_INF_POS +1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_LN2 0.693147180559945309417232
#define S21_E 2.71828182845904523536028747
#define S21_ZERO_NEG -0.000000
#define S21_ZERO_POS 0.000000
#define S21_ACCURACY 1e-06

#define S21_IS_NAN(x) (x != x)
#define S21_IS_INF(x) (x == S21_INF_POS || x == S21_INF_NEG)

int s21_abs(int x);

long double s21_fabs(double x);

long double s21_fmod(double x, double y);

long double s21_exp(double x);

long double s21_ceil(double x);

long double s21_floor(double x);

long double s21_sqrt(double x);

long double s21_log(double x);

long double s21_atan(double x);

long double s21_asin(double x);

long double s21_acos(double x);

long double s21_sin(double x);

long double s21_cos(double x);

long double s21_tan(double x);

long double s21_pow(double base, double exp);

long double s21_trunc(long double x);

#endif