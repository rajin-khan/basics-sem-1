//This program will compute the sum of the series: 1/1! + 1/2! + 1/3! + ... + 1/n! where n is an input.

#include<stdio.h>

int main() {

    int n;
    float sum=0;

    printf("\nThis program will compute the sum of the series: (1/1!) + (1/2!) + (1/3!) + ... + (1/n!).\n\n");

    printf("Please enter a value for n (an integer): ");
    scanf("%d", &n);

    printf ("\n");

    for (int i=1; i<=n; i++) {

        printf("(1/%d!) + ", i); 

        int nfact=1;

        for (int k=1; k<=i; k++) {
               
            nfact *= k;
        }
        sum += 1.0/nfact;
    }

    printf("\b\b= %f\n\n", sum);

    return 0;
}