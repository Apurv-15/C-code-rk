#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter 5 number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array number are\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

}