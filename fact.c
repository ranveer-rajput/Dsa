#include <conio.h>
#include <stdio.h>

int main()
{

    int n;
    printf("Enter num");
    scanf("%d", &n);
    int fact = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
        sum = fact + sum;
    }

    printf("Fact=%d", fact);
    printf("Fact=%d", sum);
}