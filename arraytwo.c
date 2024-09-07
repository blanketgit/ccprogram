#include<stdio.h>
void main(){
    float marks[5],sum;
    int i;
    float avg;
    printf("enter the marks of 5 students");
    for(i=0;i<5;i++){
        scanf("%f",&marks[i]);
    }
    sum=0;
    for(i=0;i<5;i++){
        sum=sum+marks[i];
    }
    printf("%f\n",sum);
    avg=sum/5;
    printf("%f",avg); 

}
