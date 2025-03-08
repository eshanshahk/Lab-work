// Write a menu driven program to perform matrix addition, multiplication, transpose
#include <stdio.h>

int main()
{
    int choice, size;
    do
    {
        printf("Enter your choice\n");
        printf("1. Matrix Addition \n"
               "2. Matrix Multiplication \n"
               "3. Matrix Transpose \n"
               "4. Exit \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int arr1[4][4], arr2[4][4], sum[4][4], i, j, size;
            printf("Enter the size of array : ");
            scanf("%d", &size);
            printf("Enter array 1 ");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
            printf("Enter array 2 ");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    scanf("%d", &arr2[i][j]);
                }
            }
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    sum[i][j] = arr1[i][j] + arr2[i][j];
                }
            }
            printf("Sum is \n");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    printf("%d \t", sum[i][j]);
                }
                printf("\n");
            }
        }
        break;

        case 2:
        {

            int arr1[4][4], arr2[4][4], result[4][4], i, j, k, size;
            printf("Enter the size of array : ");
            scanf("%d", &size);
            printf("Enter array 1 ");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
            printf("Enter array 2 ");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    scanf("%d", &arr2[i][j]);
                }
            }
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    for (k = 0; k < size; k++)
                    {
                        result[i][j] = arr1[i][k] * arr2[k][j];
                    }
                }
            }

            printf("Resultant matrix:\n");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        }
        break;

        case 3:
        {

            int arr1[4][4], arr2[4][4], transpose[4][4], i, j, size;
            printf("Enter the size of array : ");
            scanf("%d", &size);
            printf("Enter array \n");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    transpose[j][i] = arr1[i][j];
                }
            }
            printf("Matrix:\n");
            for (j = 0; j < size; j++)
            {
                for (i = 0; i < size; i++)
                {
                    printf("%d ", arr1[i][j]);
                }
                printf("\n");
            }
            printf("Transpose matrix:\n");
            for (j = 0; j < size; j++)
            {
                for (i = 0; i < size; i++)
                {
                    printf("%d ", transpose[i][j]);
                }
                printf("\n");
            }
        }
        break;
        }
    } while (choice != 4);
    return 0;
}
