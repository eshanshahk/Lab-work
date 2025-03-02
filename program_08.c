// Write a function to find factorial of a number
#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter the number to find its factorial :");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}