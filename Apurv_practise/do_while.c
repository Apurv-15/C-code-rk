#include<stdio.h>
void main()
{
    int a,index=0;
    printf("Enter a number\n");
    scanf("%d",&a);

    do{
        printf("%d",index);
        index+=index;
        
    }
}