//Write a menu driven program to perform matrix addition, multiplication, transpose
#include <stdio.h>

int main() {
    int arr1[10][10],arr2[10][10],i,j,size,option,sum[10][10];
    A: printf("Enter the size of array");
    scanf("%d", &size);
    do
    {
        printf("Choose the operation");
        scanf("%d",&option);
    
    switch (option)
    {
    case 1: printf("Enter array 1");
        for (i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter array 2");
        for (i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
            printf("Enter array 2");
        for (i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                sum[10][10]= arr1[i][j]+ arr2[i][j];
            }
            for ( i = 0; i < size; i++)
            {
                for ( j = 0; i < size; j++)
                {
                    printf("%d",sum[i][j]);
                }
                
            }
            
        break;
        }
    }
    default:
        break;
}
}
while (option=1);
{
    goto A;
}
return 0;
}