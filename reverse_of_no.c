#include<stdio.h>
void main()
{

    int n,rem,rev;
    printf("Enter a no\n");
    scanf("%d",&n);

    while (n!=0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
    
}
