#include "tasks.h"
#include <conio.h>
#include <math.h>
#include <stdio.h>

#define EPSILON 1e-8

void task2() {
  int n = 0;
  printf("enter for value n: ");
  scanf_s("%d", &n);

  if (n < 1) {
    puts("n must be a natural number");
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("%d\n", i);
    }
  }
}

void task11() {
  puts("inches      cm");

  for (int inches = 10; inches <= 22; inches++) {
    double cm = inches * 25.4 / 10;
    printf("%d      %.3lf\n", inches, cm);
  }
}

void task58() {
  double x = 2;
  double sum = 0;
  double power = x;

  for (int i = 1; i <= 11; i += 2) {
    sum += power / i;
    power *= x * x;
  }

  printf("Result: %.3lf\n", sum);
}

void task74() {
  int n = 0;
  double x = 0;
  printf("enter for value n: ");
  scanf_s("%d", &n);
  printf("enter for value x: ");
  scanf_s("%lf", &x);

  if (n <= 1 || n > 10) {
    puts("n must be greater than 1 and not greater than 10");
    return;
  }

  double term = 1;
  double sum = 1;

  for (int i = 1; i <= n; i++) {
    term = term * x / i;
    sum += term;
  }

  printf("Result: %.3lf\n", sum);
}

void task123() {
  int sum = 0;

  puts("press keys, press Esc to finish");

  int symbol = _getch();
  while (symbol != 27) {
    printf("%c", symbol);
    sum += symbol;
    symbol = _getch();
  }

  printf("\nsum of codes: %d\n", sum);
}

void task130() {
  int limit = 0;
  printf("enter for value limit: ");
  scanf_s("%d", &limit);

  if (limit < 2 || limit > 1000) {
    puts("limit must be from 2 to 1000");
    return;
  }

  int count = 0;

  for (int n = 2; n <= limit; n += 2) {
    int numerator = n * (n + 1) * (n + 2);

    if (numerator % 24 != 0) {
      printf("n = %d: the number is not an integer\n", n);
      count++;
    }
  }

  if (count == 0) {
    puts("the number is an integer for every even n");
  }
}

void task149() {
  int count = 0;

  for (int horses = 1; horses * 31 < 1770; horses++) {
    int rest = 1770 - horses * 31;

    if (rest % 21 == 0) {
      printf("horses: %d, bulls: %d\n", horses, rest / 21);
      count++;
    }
  }

  printf("number of solutions: %d\n", count);
}

void task185() {
  double a = 0;
  printf("enter for value a: ");
  scanf_s("%lf", &a);

  if (a <= 1 + EPSILON || a > 1.5) {
    puts("a must be greater than 1 and not greater than 1.5");
    return;
  }

  for (int i = 2; 1 + 1.0 / i >= a - EPSILON; i++) {
    printf("1 + 1/%d = %.3lf\n", i, 1 + 1.0 / i);
  }
}

void task186() {
  double a = 0;
  printf("enter for value a: ");
  scanf_s("%lf", &a);

  if (a <= 1 + EPSILON || a > 1.5) {
    puts("a must be greater than 1 and not greater than 1.5");
    return;
  }

  int i = 2;
  while (1 + 1.0 / i >= a - EPSILON) {
    i++;
  }

  printf("1 + 1/%d = %.3lf\n", i, 1 + 1.0 / i);
}

void task247() {
  double a = 0;
  double b = 0;
  double c = 0;
  printf("enter for value a: ");
  scanf_s("%lf", &a);
  printf("enter for value b: ");
  scanf_s("%lf", &b);
  printf("enter for value c: ");
  scanf_s("%lf", &c);

  if (c <= 0) {
    puts("step must be positive");
    return;
  }
  if (b < a) {
    puts("b must be greater than or equal to a");
    return;
  }

  int steps = (int)((b - a) / c + EPSILON);

  puts("x      F(x)");
  for (int i = 0; i <= steps; i++) {
    double x = a + i * c;

    if (fabs(cos(2 * x)) < EPSILON) {
      printf("%.3lf      the value is outside of the domain\n", x);
      continue;
    }

    double result = tan(2 * x) - 3;
    printf("%.3lf      %.3lf\n", x, result);
  }
}
