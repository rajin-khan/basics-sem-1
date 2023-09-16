/*
This program will compute the sum of the following series using nested loop:
(1/1) + (1/1 + 1/2) + (1/1 + 1/2 + 1/3) ... + (1/1 + 1/2 + 1/3 + 1/n)
*/

#include<stdio.h>

int main() {

    int n;
    float frsum=0;

    printf("\nThis This program will compute the sum of the following series (1/1) + (1/1 + 1/2) + (1/1 + 1/2 + 1/3) ... + (1/1 + 1/2 + 1/3 + 1/n).\n\n");

    printf("Please enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {

        printf("(");

        float insum=0;
        for (int j=1; j<=i; j++) {

            printf("1/%d + ", j);
            insum += 1.0/j;
        }
        printf("\b\b\b");
        
        printf(") + ");
        
        frsum += insum;
    }
    printf("\b\b= %f\n\n", frsum);

    return 0;
}