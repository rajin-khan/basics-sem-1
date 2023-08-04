//This program computes the super-factorial of a given number n, sf(n) = 1!*2!*3!...n!

#include<stdio.h>

int main() {

    int n, i, k, sf=1;

    printf("\nThis program will compute the super-factorial of a number you enter.\n\n");

    printf("Enter your number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {

        int nf=1;

        for (k=1; k<=i; k++) {
            
            nf *= k;
        }

        sf *= nf;
    }

    printf("\nThe super-factorial of %d is = %d\n\n", n, sf);

    return 0;
}