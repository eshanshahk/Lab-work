// Write a function to print nCr
#include <stdio.h>
#include <stdlib.h>
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
    int r, n, ncr;
    printf("Let's find nCr! \n");
    printf("Enter n : ");
    scanf(" %d", &n);
    printf("Enter r : ");
    scanf(" %d", &r);
    ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("%dC%d is %d", n, r, ncr);
    return 0;
}