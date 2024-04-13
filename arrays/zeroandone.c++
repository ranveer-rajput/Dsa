#include<iostream>
using namespace std;


void printZeroAndOne(int arr[],int n){
    int zero=0;
    int one=0;


for(int i=0;i<n;i++){
    if(arr[i]==0){
        zero++;
    }
    if(arr[i]==1){
        one++;
    }
}
    int index=0;
    while (zero--)
    {
        arr[index]=0;
        index++;
    }
    while (one--)
    {
        arr[index]=1;
        index++;
    }
    
    

}

int main(){
  int n;
  cin>>n;
  int arr[n];
 
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  printZeroAndOne(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i];
}


    return 0;
}