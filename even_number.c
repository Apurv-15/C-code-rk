#include <stdio.h>
int main()
{
      int i,num;
      printf("Enter a number till uou want a even number\n");
      scanf("%d", &num);
      for (i = 1; i <= num; i++)
      {
            if (i % 2 == 0)
            {
                  printf("%d\n", i);
            }
      }
      return 0;
}