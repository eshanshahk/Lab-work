// Write a C program to check the occurrence of a character in a string
#include <stdio.h>
int main()
{
    char str[100], a;
    int occ = 0, count = 0;
    printf("Enter a string \n");
    scanf("%[^\n]", str);
    printf("Enter the character which you want check the occurence \t");
    scanf(" %c", &a);

    for (occ = 0; occ != '\n'; occ++)
    {
        if (str[occ] == a)
        {
            count++;
        }
    }
    printf("The occurence of %c is %d times", a, count);
    return 0;
}