#include <stdio.h>
int fact(int x)
{
    int i, f = 1;
    for (i = x; i >= 1; i--)
    {
        f = f * i;
    }
    return (f);
}
void main()
{
    int n, ans;
    printf("Enter number\n");
    scanf("%d", &n);
    ans = fact(n);
    printf("Factorial is %d", ans);
}