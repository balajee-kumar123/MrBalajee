#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks out of 100 = ");
    scanf("%d",&marks);

    if (marks >= 90)
    {
        printf("You get GRADE A");
    }
    else if (marks >=75)
    {
        printf("You get GRADE B");
    }
    else if (marks >= 60)
    {
        printf("You get GRADE C");
    }
    else if (marks >= 40)
    {
        printf("You get GRADE D");
    }
    else
    {
        printf("You Are ""FAIL");
    }
}