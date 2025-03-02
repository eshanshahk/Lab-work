// Write a program to check whether the string is a Palindrome without using string library functions.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, len, j = 0;
    printf("Enter a string to check whether it's palindrome or not! \n");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        i++;
    }
    j = i - 1;
    i = 0;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("The string is not palindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("It is a palindrome");
    return 0;
}
