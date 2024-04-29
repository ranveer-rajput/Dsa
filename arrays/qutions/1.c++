#include<iostream>
using namespace std;

void number(int arr[],int size){
      int i=0;
      int j=0;
      for(;i<size;i++){
      
          if(arr[i]<0){
            //  swap(arr[i],arr[j]);
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
          
            j++;

          }
        

      }
     
     
   
}

int main(){
 
  int arr[]={1,-3,4,-2,3,-8};
  int size=6;

  number(arr,size);
 int  i=0;
while(i<size){
    cout<<arr[i];
    i++;

}


}