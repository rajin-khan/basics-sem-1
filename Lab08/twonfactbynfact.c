//This program will calculate the value of (2n)!/n!.

#include<stdio.h>

int main() {

    int n, tn, ans; //variables for storing values of n, 2n, and the answer
    int nfact=1, tnfact=1; //the variables for n factorial, and 2n factorial are initialized

    printf("\nThis program will calculate the value of (2n)!/n!\n");

    printf("\nPlease enter the value of n:\n\n");
    scanf("%d", &n);

    tn = 2*n;

    for (int i=1; i<=n; i++) { //i iterates till it is less than n
    
        nfact *= i; //the product of 1*2*3*...*n, continues till it reaches n, increases by 1 for every iteration
    }

    for (int i=1; i<=tn; i++) { //same as the last one, calculates 2n factorial
    
        tnfact *= i;
    }

    ans = tnfact/nfact;

    if (n==0) {

        printf("\nCannot be computed as n must be > 0.\n\n");
    }
    else {
        
        printf("\n(2n)!/n! = %d\n\n", ans);
    }
    return 0;
}