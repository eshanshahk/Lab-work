// Write a C program to print the elements of an array in reverse order using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char a, int i)
{
    for (int *i; i > 0; i--)
        printf("%s", a[i]);
}
int main()
{
    int i;
    char str[20];
    printf("Enter the string");
    scanf("%s", str);
    i = strlen(str);
    rev(str, i);
    printf("Reversed string is : ");
    return 0;
}