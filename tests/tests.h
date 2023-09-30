#include <check.h>
#include <math.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846264338327950288
#define M_PI_2 1.57079632679489661923132169163975144

#define S21_DBL_MAX 1.7976931348623158e+308 /* max value */
#define S21_DBL_MIN 2.2250738585072014e-308 /* min positive value */

#define S21_FLT_MAX 3.402823466e+38F /* max value */
#define S21_FLT_MIN 1.175494351e-38F /* min positive value */

#define ACCURACY 1e-06

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}