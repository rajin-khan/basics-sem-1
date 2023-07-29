//This program will compute the sum of the series 5+8+11+...+n.

#include<stdio.h>

int main() {

    int sum, n;

    printf("\nThis program will compute the sum of the series 5+8+11+...+n.\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 0;

    for (int i=5; i<=n; i+=3) {
        
        printf("%d + ", i);
        sum +=i;
    }
    printf("\b\b= %d\n\n", sum);

    return 0;
}