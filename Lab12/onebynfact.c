//This program will find the sum of the following series using user-defined function:  1/1! + 2/2! + 3/3! + …… +N/N!

#include<stdio.h>

float factorial(int x);
float nbyfactn(int n);

int main() {
    
    int n;

    printf("\nThis program will calculate the sum of the following series :  1/1! + 2/2! + 3/3! + ... +N/N!\n");

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of the series is: %.3f\n\n", nbyfactn(n));

    return 0;
}

float factorial(int x) {

    float fact = 1;

    for (int i=1; i<=x; i++) {

        fact *= i;
    }

    return fact;
}

float nbyfactn(int n) {

    float sum = 0;

    for (int i=1; i<=n; i++) {
        
        sum += i/factorial(i);
    }

    return sum;
}