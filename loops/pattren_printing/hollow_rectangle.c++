#include <iostream>
#include <conio.h>

using namespace std;
 
 int main(){
       for(int row=0;row<4;row++){
         cout<<row<< " ";

         for(int col=0;col<4;col++){
            if(row==0||row==3){
               cout<<"* ";
            }
            else{
               if(col==0||col==3){
                  cout<<"* ";
               }
               else{
                  cout<<"  ";
               }
            }
         }
         cout<<endl;
       }
   
    return 0;
 }
 





