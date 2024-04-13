#include<iostream>
using namespace std;

void rightShift(int arr[],int n){

    int temp=arr[n-1];
     for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
     }
     arr[0]=temp;

}

int main(){
   
    int arr[]={10,30,40,60,70};
    int n=5;

    rightShift(arr,n);

    for(int i=0;i<n;i++){


        cout<<arr[i];
    }
    



    return 0;
}