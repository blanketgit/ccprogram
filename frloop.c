#include<stdio.h>

int main(){
   int calc,number;
   int i;
   printf("enter the number\n");
   scanf("%d",&number);
   for(i=1;i<=10;i++){
      calc=number*i;
    printf("%d * %d = %d\n",number,i,calc);
   }
}