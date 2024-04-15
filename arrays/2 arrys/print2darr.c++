#include<iostream>
using namespace std;

 bool printarry(int arr[][3],int row,int col,int target){
    
      for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
              if(arr[i][j]==target){
               cout<<"target found at row:"<<""<< i<<"col:"<<j;
               return true;

               break;
              }
             
         }
         cout<<endl;
      }
      return false;
 }

 int main(){
    int row=2;
    int col=3;
    int target;
    cout<<"enter target value";
     cin>>target;
     int arr[2][3]={
        {1,2,4},
        {21,46,9},
     };

 printarry(arr,row,col,target);

   if(printarry(arr,row,col,target)==false) {
      cout << "element not found";
   } 
    
  
   


    return 0;
 }