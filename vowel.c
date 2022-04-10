#include<stdio.h>
void main()
{
    char n;
    printf("Enter a character\n");
    scanf("%c",&n);
    if((n=='a')||(n=='e')||(n=='i'))
    {
        printf("It is a vowel %c");
    }
}