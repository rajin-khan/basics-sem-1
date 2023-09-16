//This program will print an inverted spaced asterisk pyramid for the number of lines you enter.

#include<stdio.h>

int main() {

    int n;

    printf("\nThis program will print am inverted spaced asterisk pyramid for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=n; i>=1; i--)  {

        for (int s=1; s<=n-i; s++) {

            printf(" ");
        }
        for (int j=1; j<=i; j++) {

            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}