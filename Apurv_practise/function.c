#include <stdio.h>
void takenos()
{
    int i;
    printf("Enter number\n");
    scanf("%d", &i);
}
void main()
{
    int c;
    c=takenos();
    printf("Number is %d",c);
}