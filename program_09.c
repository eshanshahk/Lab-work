// Write a recursive function to print the n th Fibonacci number
#include <stdio.h>
#include <stdlib.h>
int fibonacci(int);
int fibonacci(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}
int main()
{
    int num;
    printf(" Enter a nth digit of fibonacci series : ");
    scanf(" %d", &num);
    printf("Fibonacci number at position %d is %d\n", num, fibonacci(num));
    return 0;
}
