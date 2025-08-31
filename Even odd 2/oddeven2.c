#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    if ( n == 0)
    {
        printf("Number is a Whole number");
    }
    else if (n % 2 == 0)
    {
        n = n * n;
        printf("The number is even so, number is squared by itself = %d",n);
    }
    else
    {
        n = n + 1;
        printf("The number is odd so, number is increased by 1 = %d",n);
    }
}