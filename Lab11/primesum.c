//This program will calculate the sum of all the prime numbers between m and n.

#include<stdio.h>

int main() {

    int m, n, sum = 0;

    printf("\nThis program will calculate the sum of all the prime numbers between m and n.\n");

    printf("\nEnter the value of m (must be > 1): ");
    scanf("%d", &m);
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of all the prime numbers between %d and %d are: \n", m, n);

    for (int i=m; i<=n; i++) {
        
        int prime = 1;

        for (int k=2; k<=i/2; k++) {

            if (i%k==0) {

                prime = 0;
                break;
            }

            else {

                continue;
            }
        }

        if (prime!=0) {
            
            sum += i;
            printf("%d + ", i);
        }
    }

    printf("\b\b= %d \n\n", sum);

    return 0;
}