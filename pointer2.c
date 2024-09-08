#include<stdio.h>

void main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    //assigning one pointer value to anther pointer 
    q=p;
    //explaination of the above line q=&a. so address of a is stored into q so now
    // pointer also points to address 100 same pointer q
    printf("%d %d %d",a,*p,*q);
}