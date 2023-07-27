//This program will compute the sum of the following series (using while loop): 4+11+18+...+n

#include<stdio.h>

int main() {

    int sum, n;

    printf("\nThis program will compute the sum of the series 4+11+18+...+n.\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 0;

    int i = 4;
    
    while (i<=n) {

        printf("%d + ", i);
        sum +=i;
        i +=7;
    }
    printf("\b\b= %d\n\n", sum);

    return 0;
}