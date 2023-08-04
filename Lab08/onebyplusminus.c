#include<stdio.h>

int main() {

    int n, i;
    float sum, term;

    printf("\nThis program will compute the sum of the series (1/1)-(1/2)+(1/3)-(1/4)...+(1/n).\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 1;

    for (i=2; i<=n; i++) {

        term = 1.0/i;

        if (i%2==0) {

            sum = sum - term;
        }
        else {

            sum = sum + term;
        }
    }
    
    printf("The sum of the series up to 1/%d = %.2f\n\n", n, sum);

    return 0;
}