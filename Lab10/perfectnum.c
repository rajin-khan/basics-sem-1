//This program will print all the perfect numbers from 1 to n.

#include<stdio.h>

int main() {

    int n;

    printf("\nThis program will print all the perfect numbers from 1 to n.\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=2; i<=n; i++) {

        int sum = 0;

        for (int k=1; k<=(i/2); k++) {

            if (i%k==0) {

                sum += k;
            }
        }
        if (i==sum) {

            printf("%d, ", i);
        }
        else {
            
            continue;
        }
    }

    printf("\b\b \n\n");

    return 0;
}