#include<stdio.h>
void main()
{
    int a[50],i,n,max;
    printf("Enter numbers\n");
    scanf("%d",&n);

    printf("Enter value\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max )
        {
            max=a[i];
        }
    }
    printf("Largest number is %d ",max);
}
    