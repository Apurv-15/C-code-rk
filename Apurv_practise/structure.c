#include <stdio.h>
#include <conio.h>
struct book
{
    char bname[20];
    float price;
    char author[20];
};
void main()
{
    int i;
    struct book b[5];
    printf("Enter bood details of 5 number\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter book name\n");
        gets(b[i].bname);
        printf("Enter author name\n");
        gets(b[i].author);
        printf("Enter book price\n");
        scanf("%d", &b[i].price);
    }
    printf("book name\t book price\t book author\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t %d\t %s\n", b[i].bname, b[i].price, b[i].author);
    }
}