#include<stdio.h>
void main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(year%4==0 && year%100==0 || year%400==0)
    {
        printf("Year is a leap year %d",year);
    }
    else 
    {
        printf("Its not leap year %d",year);
    }
}