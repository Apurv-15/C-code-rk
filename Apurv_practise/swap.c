#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void main()
{
    int n1, n2;
    printf("Enter 2 number\n");
    scanf("%d %d", &n1, &n2);

    printf("Before swap n1=%d\n", n1);
    printf("Before swap n2=%d\n", n2);
    swap(n1, n2);
        printf("After swap \n");
        printf("n1=%d and n2=%d", n1,n2);
}
