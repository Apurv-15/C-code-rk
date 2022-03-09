#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);

    if (marks>=75)
    {
        printf("You passed with distinction");
    }
    else if (marks>=60)
    {
         printf("You passed with first class");
    }
    else if (marks>=40)
    {
         printf("You passed with second class");
    }
    else
    {
        printf("You are fail");
    }
    
    
    
}