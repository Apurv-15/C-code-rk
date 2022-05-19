#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20];
    int i;
    printf("Enter 2 string\n");
    gets(s1);
    gets(s2);
    i = strcmp(s1, s2);

    if(i==0)
    {
        printf("String equal");
    }
    else{
        printf("String not equal");

    }
}