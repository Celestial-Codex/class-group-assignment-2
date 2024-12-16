#include <stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void printf_result(int a, int b, char *operation, float result);

int main() {
  int num1, num2;
  char operator;

  printf("Enter integer(a)>>> ");
  scanf("%d", &num1);
  printf("Enter integer(b)>>> ");
  scanf("%d", &num2);

  printf("Enter an operator (a for add, s for subtract, m for multiply, d for "
         "divide)>>> ");
  scanf(" %c", &operator);

  switch (operator) {
  case 'a':
    add(num1, num2);
    break;
  case 's':
    subtract(num1, num2);
    break;
  case 'm':
    multiply(num1, num2);
    break;
  case 'd':
    divide(num1, num2);
    break;
  default:
    printf("Invalid operator! Use a, s, m, or d.\n");
    return 1;
  }
  return 0;
}

void add(int a, int b) {
  int result = a + b;
  printf_result(a, b, "+", result);
}

void subtract(int a, int b) {
  int result = a - b;
  printf_result(a, b, "-", result);
}

void multiply(int a, int b) {
  int result = a * b;
  printf_result(a, b, "x", result);
}

void divide(int a, int b) {
  if (b != 0) {
    float result = (float) a / b;
    printf_result(a, b, "/", result);
  } else {
    printf("Error: Division by zero is not allowed.\n");
  }
}

void printf_result(int a, int b, char *operation, float result) {
  printf("%d %s %d = %f\n", a, operation, b, result);
}
