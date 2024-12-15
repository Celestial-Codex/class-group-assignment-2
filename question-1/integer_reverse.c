#include <stdio.h>

int main() {
  int number;
  int remainder = 0;
  int reversed_int = 0;

  printf("Enter number >>> ");
  scanf("%d", &number);

  while (number > 0) {
    remainder = number % 10;
    number -= remainder;
    number /= 10;
    reversed_int *= 10;
    reversed_int += remainder;
  }
  printf("%d\n", reversed_int);

  return 0;
}
