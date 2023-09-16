//This program will print all even numbers between m and n except the ones which are divisible by 3.

#include<stdio.h>

int main() {

    int m,n;

    printf("\nThis program will print all even numbers between m and n, except for the ones divisible by 3.\n");

    printf("\nPlease enter the values of m and n.\n");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    printf("All even numbers between %d and %d, except those divisible by 3 are: ", m, n);
   
    for (int i=m; i<=n; i++) {

        if ((i%2)==0) {

            if (i%3==0)
            continue;

            printf("%d, ", i);
        }
        else {
            
            continue;
        }
    }

    printf("\b\b. \n\n");

    return 0;
}