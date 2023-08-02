//This program will compute the sum of the series 1+2+3+...+n.

#include<stdio.h>

int main() {

    int sum, n;

    printf("\nThis program will compute the sum of the series 1+2+3+...+n.\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 0;

    int i=1;
    while (i<=n) {
        
        printf("%d + ", i);
        sum +=i;
        i++;
    }
    printf("\b\b= %d\n\n", sum);

    return 0;
}