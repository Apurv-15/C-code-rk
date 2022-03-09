#include <stdio.h>
void main()
{
    int chem, maths, sanskrit;
    float total;
    printf("Enter chem marks\n");
    scanf("%d", &chem);

    printf("Enter maths marks\n");
    scanf("%d", &maths);

    printf("Enter sanskrit marks\n");
    scanf("%d", &sanskrit);

    total = (chem + maths + sanskrit) / 3;

    if ((total < 40) || chem < 33 || maths < 33 || sanskrit < 33)
    {
        printf("You are failed %f", total);
    }
    else
    {
        printf("You are passed %f", total);
    }
}