#include <stdio.h>
void main()
{
    int a[30], i, max, n;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Largest element is %d.\n", max);
}