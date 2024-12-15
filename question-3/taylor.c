#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int pwr(int base, int exponent);
const float euler = 2.718281828;

int main()
{
    int x;
    printf("Enter value of x for e^x: ");
    scanf("%d", &x);
    double ans = 0;
    for (int i = 0; i < x; i++)
    {
        ans += pwr(x, i) / factorial(i);
    }
    printf("%.4f\n", ans);
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int pwr(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
    {
        for (int i = 0; i < exponent; i++)
        {
            base *= base;
            return base;
        }
    }
}