#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    char str[20];
    printf("Enter string\n");
    gets(str);
    n = strlen(str);
    printf("Length of string is %d", n);
}