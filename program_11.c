// Recursive function to count digits

#include <stdio.h>
int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Number of digits in %d is %d\n", n, countDigits(n));
    return 0;
}
