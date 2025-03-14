// Write a C program to print the elements of an array in reverse order using pointers.
#include <stdio.h>
#include <string.h>

void rev(char *a, int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}

int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("Reversed string is: ");
    rev(str, len);

    return 0;
}
