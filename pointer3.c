#include<stdio.h>

void main(){
    int a=40,b=50;
    int *p,*q;
    p=&a;
    *q=*p;
    printf("%d %d %d",a,*p,*q);
}