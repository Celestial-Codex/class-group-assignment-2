//Write a program that computes the value of ex by using the formula ex=1+x/1! +x2/2! +x3/3! +--------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);  //store the value of the factorial of n in n fact

int main()
{
    int x;
    int terms; // To add for a specific number of terms in the expansion
    printf("Enter value of x for e^x: ");  //allows user input to value of x
    scanf("%d", &x);
    printf("For how many terms?\n");  //allows user input to the number of of terms required by the user
    scanf("%d", &terms);
    double ans = 0;
    for (int i = 0; i < terms; i++)  //if i is equal to 0 and the number of terms are less than i then incriments by 1
    {
        ans += pow(x, i) / factorial(i);  //increment the anwser with the value of the answer
    }
    printf("%f\n", ans);
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)  // returns the value of n when its greater than or equal to 0
        return 1;
    else
        return n * factorial(n - 1);  //returns the value of n
}

