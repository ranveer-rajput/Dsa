#include<iostream>
using namespace std;


void leftShift(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
       
    }
    arr[n-1]=temp;
   

}
int main(){
 
 int arr[]={20,40,50,50,60,10};
 int n=6;
  leftShift(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i];
  }




    return 0;
}