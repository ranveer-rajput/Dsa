#include <iostream>
using namespace std;


void minnum(int arr[][3],int row,int col){
    int temp=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(temp>arr[i][j]){
                temp=arr[i][j];
            }
        }

    }
    cout<<temp;

}

void maxnum(int arr[][3],int col,int row){
    int max=arr[0][0];
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }

     }
        cout<<max;
  

}

void sum(int arr[][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
  

}
int main()
{
    int arr[3][3] = {
        {18, 2, 4},
        {7, -1, 4},
        {12, 56, 75},

    };
    int row=3;
    int col=3;
     
    minnum(arr,row,col);
    cout<<endl;
    maxnum(arr,row,col);
    cout<<endl;
    sum(arr,row,col);



    return 0;
}