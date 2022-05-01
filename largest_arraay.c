#include<stdio.h>
void main()
{
    int a[50],n,max,i;
    printf("Enter nos of element\n");
    scanf("%d",&n);
    printf("Enter number\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Largest number is %d",max);
}