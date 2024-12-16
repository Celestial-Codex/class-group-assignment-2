//Write a program that computes the value of ex by using the formula ex=1+x/1! +x2/2! +x3/3! +--------

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
double pwr(int base, int exponent);

int main()
{
    int x;
    int terms;
    printf("Enter value of x for e^x: ");
    scanf("%d", &x);
    printf("For how many terms?\n");
    scanf("%d", &terms);
    double ans = 0;
    for (int i = 0; i < terms; i++)
    {
        ans += pwr(x, i) / factorial(i);
    }
    printf("%f\n", ans);
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}
double pwr(int base, int exponent)
{
    double result = base;
    if (exponent == 0)
        return 1;
    else if (exponent < 0)
    {
        exponent *= -1;
        for (int i = 1; i < exponent; i++)
        {
            result *= base;
        }
        return 1 / result;
    }
    else
    {
        for (int i = 1; i < exponent; i++)
        {
            result *= base;
        }
        return result;
    }
}
