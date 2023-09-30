# s21_math

Проект в Школе 21. Реализация библиотеки math.h на C

| Функция   | Описание                                                           |
|-----------|--------------------------------------------------------------------|
| s21_abs   | Вычисляет абсолютное значение целого числа                         |
| s21_acos  | Вычисляет арккосинус                                               |
| s21_asin  | Вычисляет арксинус                                                 |
| s21_atan  | Вычисляет арктангенс                                               |
| s21_ceil  | Возвращает ближайшее целое число, не меньшее заданного значения    |
| s21_cos   | Вычисляет косинус                                                  |
| s21_exp   | Возвращает значение e, возведенное в заданную степень              |
| s21_fabs  | Вычисляет абсолютное значение числа с плавающей точкой             |
| s21_floor | Возвращает ближайшее целое число, не превышающее заданное значение |
| s21_fmod  | Остаток операции деления с плавающей точкой                        |
| s21_log   | Вычисляет натуральный логарифм                                     |
| s21_pow   | Возводит число в заданную степень                                  |
| s21_sin   | Вычисляет синус                                                    |
| s21_sqrt  | Вычисляет квадратный корень                                        |
| s21_tan   | Вычисляет тангенс                                                  |  

Как запустить тесты:

```
make build
make test
```

Как запустить отчет о покрываемости тестов:

```
make build
make gcov_report
```

Для пересборки проекта используется цель ```make rebuild```