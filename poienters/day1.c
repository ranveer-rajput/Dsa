#include<stdio.h>
int printNo(int*);

 int main(){
      int n;
      scanf("%d",&n);
      int sum=0;
      int *sumPtr=&sum;
      int fact;
      int *factPtr=&fact;
      for(int i=1;i<=n;i++){
          *factPtr=printNo(&i);
         *sumPtr+=*factPtr;
      }
         printf("%d",*factPtr);
     
      printf("sum of fact=%d",*sumPtr);

 }

 int printNo(int *nPtr){

 
    int fact=1;
  
    for(int i=1;i<=*nPtr;i++){
      fact*=i;
    }
 
 return fact;

    
 
}