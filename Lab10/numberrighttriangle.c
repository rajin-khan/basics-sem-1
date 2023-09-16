/*
This program will print the pattern:

1
23
456
7890
12345

for n number of lines
*/

#include<stdio.h>

int main() {

    int n, k=1;

    printf("\nThis program will print a number right-triangle.\n");

    printf("\nPlease enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=i; j++) {

            if (k>9) {
                
                k = 0;
            }
            printf("%d", k++);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}