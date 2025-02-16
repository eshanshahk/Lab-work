//Write a C program to find the length of a string without using string library functions.
#include <stdio.h>
int main() {
    int length=0;
    char str[100];
    printf("Enter a string \n");
    scanf("%[^\n]",str);

    while(str[length]!='\0'){
    length++;
    }
    printf("Length of the string is %d", length);
    return 0;
}