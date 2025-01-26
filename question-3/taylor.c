//Write a program that computes the value of ex by using the formula ex=1+x/1! +x2/2! +x3/3! +--------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);  

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
        ans += pow(x, i) / factorial(i);  
    }
    printf("%f\n", ans);
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)  
        return 1;
    else
        return n * factorial(n - 1);  
}

