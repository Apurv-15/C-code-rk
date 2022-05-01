#include <stdio.h>
void main()
{
    int[3][3], t[3][3];
    int i, j;

    printf("Enter value of 1st matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (i = 0; i < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; i < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of a\n");

    for (i = 0; i < 3; i++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}
