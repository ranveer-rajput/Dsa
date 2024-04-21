#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{

    for (int i = 1; i <= 4; i = i + 1)
    {
        for (int j = 0; j < 4; j = j + 1)
        {
            cout<<i+j;
        }
        cout<<endl;
    }
    return 0;
}