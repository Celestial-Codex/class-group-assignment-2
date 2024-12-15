#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POWER 15
int factorial(int n);

int main(int argc, char const *argv[])
{
    int x;
    for (int i = 0; i < POWER; i++)
    {
        x += pow(POWER, i) / factorial(i);
    }
    printf("%d\n", x);
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}