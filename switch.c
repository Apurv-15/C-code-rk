#include<stdio.h>
void main()
{
    int month;
    printf("Enter a number\n");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("Jan");
        break;
    
    case 2:
        printf("feb");
        break;
    
    case 3:
        printf("march");
        break;
    
    default:
        printf("invalid");
    }

    getch();
}