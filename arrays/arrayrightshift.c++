#include<iostream>
using namespace std;

void rightShift(int arr[],int n){

    int temp[]={60,70};
     for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-2];
     }
     arr[]=temp[];

}

int main(){
   
    int arr[]={10,30,40,60,70};
    int n=5;
    int k=2;

    rightShift(arr,n);

    for(int i=0;i<n;i++){


        cout<<arr[i];
    }
    



    return 0;
}