#include <stdio.h>
#include <conio.h>

void fact(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact(n);

    return 0;
}

void fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
 
        fact = i * fact;
    }
  
   

}
