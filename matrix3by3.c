#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    printf("Enter value of 1st matrix\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd matrix\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d\t", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition matrix is \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d\t",c[i][j]);
        }
        printf("\n");
     }
    
}