#include<iostream>
using namespace std;

void rightshiftBytwo(int arr[],int n){
  
   int temp[2]={arr[n-2],arr[n-1]};
     
      for(int i=n-1;i>=2;i--){
        arr[i]=arr[i-2];
      }
      arr[0]=temp[0];
      arr[1]=temp[1];
  
}
int main(){

  int arr[]={10,20,30,40,50};
  int n=5;

  
    
    rightshiftBytwo(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}