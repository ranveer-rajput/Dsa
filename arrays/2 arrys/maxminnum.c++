#include<iostream>
using namespace std;
#include <climits>
void minNum(int arr[3][3],int row,int col){
    int minmun=INT_MAX;
    int irow=-1;
    int jcol=-1;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(minmun>arr[i][j]){
                minmun=arr[i][j];
                irow=i;
                jcol=j;

            }
        }
    }


     if(irow!=-1&&jcol!=-1){
        cout<<"minimun number is"<<" "<<minmun<<"At"<<" "<<"row:"<<irow<<"col:"<<jcol;
     }
   
}

void maxNum(int arr[][3],int row,int col){
    int max=INT_MIN;
    int irow=-1;
    int jcol=-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                irow=i;
                jcol=j;
            }
        }
    }
      if(irow!=-1&&jcol!=-1){
        cout<<"mximum number is"<<" "<<max<<"At"<<" "<<"row:"<<irow<<"col:"<<jcol;
     }
   

}
int main(){
    
   int row=3;
   int col=3;
   int arr[3][3]{
    {6,2,3},
    {4,1,7},
    {8,9,10},

   };
   minNum(arr,row,col);
   cout<<endl;
   maxNum(arr,row,col);


 

   


   return 0;

}