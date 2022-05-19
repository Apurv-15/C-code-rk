#include <stdio.h>
void main()
{
    int i, j;
    char str1[20], str2[20];
    printf("Enter string\n");
    gets(str1);

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
        j++;
    }
    str2[i] = '\0';
    printf("String after copy %d");
    puts(str2);
}
