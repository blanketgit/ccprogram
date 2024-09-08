#include <stdio.h>

void main(){
    int a[5],b[5],c[5],i,j,k;
    printf("enter elements for first array\n");
    for(i=0;i<5;i++){
        
        scanf("%d",&a[i]);
    }
    
    printf("still we need to array values for 2nd array\n");
    
    for(j=0;j<5;j++){
        scanf("%d",&b[j]);
    }
    for(k=0;k<5;k++){
        c[k]=a[k]+b[k];
       }

       printf("the final array\n");
       for(k=0;k<5;k++){
          printf("%d ",c[k]);
       }
  
}