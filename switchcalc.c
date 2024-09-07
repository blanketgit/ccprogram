#include<stdio.h>

void main(){
    int a,b,sum,sub,div,mul;
    char operator;
    printf("Enter The Operator");
    scanf("%c",&operator);
    printf("Enter the Operands");
    scanf("%d %d",&a,&b);

    switch(operator){
        case '+':
        sum=a+b;
        printf("sum is %d",sum);
        break;

        case '-':
        sub=a-b;
        printf("substraction is %d",sub);
        break;

        case '*':
        mul=a*b;
        printf("multiplication is %d",mul);
        break;

        case '/':
        div=a/b;
        printf("Division is %d",div);
        break;
    }
         
         
         
         }
