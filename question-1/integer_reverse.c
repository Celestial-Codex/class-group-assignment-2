#include <stdio.h>

int main() {
  int number;
  int remainder = 0;
  int reversed_int = 0;
  int isNegative = 0;

  printf("Enter number >>> ");
  scanf("%d", &number);

  if (number < 0) {
    isNegative = 1;
    number = -number;
  }

  while (number > 0) {
    remainder = number % 10;
    number -= remainder;
    number /= 10;
    reversed_int *= 10;
    reversed_int += remainder;
  }
  if (isNegative) {
    reversed_int *= -1;
  }
  printf("%d\n", reversed_int);

  return 0;
}
