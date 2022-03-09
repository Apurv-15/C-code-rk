#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for (i = 0; i <=n; i++)
    {
        s=s+i;
    }
    printf("Sum of number=%d",s);

}
    