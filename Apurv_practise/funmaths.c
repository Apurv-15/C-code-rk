#include <stdio.h>

float add(int x, int y)
{
    float z;
    z = x + y;
    return z;
}
float sub(int x, int y)
{
    float z;
    z = x - y;
    return z;
}
float multi(int x, int y)
{
    float z;
    z = x * y;
    return z;
}
float divide(int x, int y)
{
    float z;
    z = x / y;
    return z;
}
void mani()
{
int n1,n2;
float ans;
printf("Enter 2 number\n");
scanf("%d %d",&n1,&n2);

ans=add(n1,n2);
printf("Addition=%f",ans);

ans=sub(n1,n2);
printf("subtraction=%f",ans);

ans=multi(n1,n2);
printf("Multiplication=%f",ans);

ans=divide(n1,n2);
printf("division=%f",ans);

}