#include <stdio.h>

int main (void)
{
     int i;
     int sum = 0;

     for (i = 1; i < 100;i = i + 2 ){
          printf("%d\n", i);
           sum += i;
     }
     printf("1-100内的奇数之和", sum);

     return (0);
}
