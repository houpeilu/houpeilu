#include <stdio.h>

void allPerfectNumbers(int n)
{int n, i, k, sum;
for (i = 1; i<= n;i++)
{
    sum = 0;
for(k = 1,k < i;k++)
{if (i%k == 0)
sum += k;
}
if (sum == i)
printf("%d", i)
}
}
int main (void){
   allPerfectNumbers(n)
}
