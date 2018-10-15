第一题：
#include <stdio.h>

void process(int va[],int vb[],int vc[]){

for (int i = 0; i < 5; i++){
    printf("%d"\n,vc[i] = {va[i] - vb[i]);
}

}

int main (){
   int va[] = {1,2,3,4,5};
   int vb[] = {5,4,3,2,1};
   int vc[5];

   process(va,vb,vc);
   return(0);
}
不会使用动态数组控制长度，而且错误也比较多。
