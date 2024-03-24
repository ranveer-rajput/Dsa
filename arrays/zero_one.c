#include<conio.h>
#include<stdio.h>

void zeroOneCount(int arr[],int size);

int main(){

    int arr[5];
    int size=5;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    zeroOneCount(arr,size);


    return 0;
}

void zeroOneCount(int arr[],int size){
     int zero=0;
     int one=0;
      for(int i=0;i<size;i++){
          if(arr[i]==0){
            zero++;
          }
          if(arr[i]==1){
            one++;
          }
      }

      printf(" count of zero:%d",zero);
      printf(" count of one:%d",one);



}