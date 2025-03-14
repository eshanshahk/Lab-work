// Pass array in function. Write a function to perform linear search.
#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == key)
        {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

    free(arr);
    return 0;
}
