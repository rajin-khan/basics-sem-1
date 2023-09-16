//This program will print an alphabet pyramid for the number of lines you enter.

#include<stdio.h>

int main() {

    int n;

    printf("\nThis program will print an alphabet pyramid for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++) {

        for (int s=i; s<=n-1; s++) {

            printf(" ");
        }
        for (int k=1; k<=((2*i)-1); k++) {
            
            printf("%c", 'A'+(k-1));
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
