// Develop a program using pointers to compute the sum of all elements stored in an array of n real numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d real numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", arr + i);
    }

    float sum = 0.0;
    float *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of all elements: %.2f\n", sum);

    free(arr);
    return 0;
}