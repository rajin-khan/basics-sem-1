//This program will print the n-th perfect number.

#include<stdio.h>

int main() {

    int n;

    printf("\nThis program will print the n-th perfect number.\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    int count=0;
    int i=1;

    while (count<n) {

        int sum = 0;

        for (int k=1; k<=(i/2); k++) {

            if (i%k==0) {

                sum += k;
            }
        }

        if (i==sum) {

            count++;

            if (count==n) {

                printf("%d", i);
            }
        }
        
        i++;
    }

    printf("\n\n");

    return 0;
}