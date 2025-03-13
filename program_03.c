// Write a C program to count number of words in a string
#include <stdio.h>
int main()
{
    char str[100];
    int word = 0, count = 0;
    printf("Enter a sentence : ");
    scanf("%[^\n]", str);

    while (str[word] != '\0')
    {
        if (str[word] == ' ')
        {
            count++;
        }

        word++;
    }
    printf("Number of words in this sentence are %d", count + 1);
    return 0;
}