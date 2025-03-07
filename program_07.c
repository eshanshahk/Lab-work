// Illustrate 2D character array. Write a C program to read and display an array of Strings
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10], n;
    printf("Enter the size of the array \n");
    scanf(" %d", &n);
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &arr[i][j]);
        }
    }
    printf("Entered array is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
