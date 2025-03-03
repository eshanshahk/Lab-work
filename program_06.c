// Write a menu driven program to perform matrix addition, multiplication, transpose
#include <stdio.h>

int main()
{
    int arr1[10][10], arr2[10][10], i, j, size, option, sum[10][10];
A:
    printf("Enter the size of array");
    scanf("%d", &size);
    do
    {
        printf("Choose the operation");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
#include <stdio.h>
            int main()
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
                return 0;
            }

            break;
        }
    }
default:
    break;
}
}
while (option = 1)
    ;
{
    goto A;
}
return 0;
}
