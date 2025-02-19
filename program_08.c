//Write a function to find factorial of a number
#include <stdio.h>
    void factorial(int fact,int n){
    int i;
    for ( i = 1; i < n; i++)
    {
        fact=fact*i;
    }
}
    
int main() {
    int n,fact=1;
    printf("Enter the number to find its factorial :");
    scanf("%d",&n);
    factorial(fact,n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}