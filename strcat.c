#include <stdio.h>
#include <string.h>
void main()
{
    char s1[10], s2[10];
    printf("Enter 2 string\n ");
    gets(s1);
    gets(s2);
    strcat(s1, s2);
    printf("string after concat is ");
    puts(s1);
}
