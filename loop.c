#include <stdio.h>
#include <conio.h>

int main()
{

    int n;
    int a = 1;
    scanf("%d", &n);
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {

            printf("%d", a);
            a++;
        }

        printf("\n");
    }
}