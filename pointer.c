#include<stdio.h>

void main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("value of a extractd through pointer p=%d\n",*p);
    printf("value of b extracted through pointe q=%d\n",*q);
}