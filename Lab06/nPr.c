//This program will calculate the value of ⁿPᵣ.

#include<stdio.h>

int main() {

    int n, r, nr, ans; //variables for storing values of n, r, and n-r
    int nfact=1, nrfact=1; //the variables for n factorial, (n-r) factorial

    printf("\nThis program will calculate the value of ⁿPᵣ.\n");

    printf("\nPlease enter the value of n, and r respectively:\n\n");
    scanf("%d", &n);
    printf("P\n");
    scanf("%d", &r);

    nr = n-r;

    for (int i=1; i<=n; i++) {

        nfact *= i; //the product of 1*2*3*...*n, continues till it reaches n, increases by 1 for every iteration
    }

    for (int i=1; i<=nr; i++) {

        nrfact *= (nr);
    }

    if (r==0) {

        ans = 1;
    }
    else if (r<=n) {

        ans = nfact/nrfact;
        printf("\n%dP%d = %d\n\n", n, r, ans);
    }
    else {
        
        printf("\nMath Error (r must be < = n)\n\n"); //as r cannot be greater than n
    }

    return 0;
}