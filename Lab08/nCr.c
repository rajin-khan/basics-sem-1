//This program will calculate the value of ⁿCᵣ.

#include<stdio.h>

int main() {

    int n, r, nr, ans; //variables for storing values of n, r, and n-r
    int rfact=1, nfact=1, nrfact=1; //the variables for r factorial, n factorial, and (n-r) factorial

    printf("\nThis program will calculate the value of ⁿCᵣ.\n");

    printf("\nPlease enter the value of n, and r respectively:\n\n");
    scanf("%d", &n);
    printf("C\n");
    scanf("%d", &r);

    nr = n-r;

    for (int i=1; i<=n; i++) { //i iterates till it is less than n
    
        nfact *= i; //the product of 1*2*3*...*n, continues till it reaches n, increases by 1 for every iteration
    }

    for (int i=1; i<=nr; i++) { //same as the last one, calculates (n-r) factorial
    
        nrfact *= i;
    }

    for (int i=1; i<=r; i++) { //r factorial
    
        rfact *= i;
    }

    ans = nfact/(rfact*nrfact);

    if (r>n) {

        printf("\nMath Error (r cannot be > n)\n\n");
    }
    else if (r<0) {

        printf("\nMath Error (r must be greater than or equal to 0)\n\n");
    }
    else {
        
        printf("\n%dC%d = %d\n\n", n, r, ans);
    }

    return 0;
}