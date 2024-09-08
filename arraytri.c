#include<stdio.h>

void main(){
    int number[10],i;
    int even=0,odd=0;
    printf("enter the 10 integer numbers");
    for(i=0;i<10;i++){
        scanf("%d",&number[i]);
        
        if(number[i]%2==0){
           even=even+1;
           
        }
        else{
            odd=odd+1;
        }
    }
    printf("the total even numbers are :->%d\n",even);
    printf("the total odd numbers are :->%d\n",odd);
    printf("hello");
}