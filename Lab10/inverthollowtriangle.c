/*
This program will print the pattern:

*****
 *  * 
  * * 
   ** 
    *
    
for n number of lines
*/

#include<stdio.h>

int main() {

    int n;

    printf("\nThis program will print an inverted right-justified triangle.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=n; i>=1; i--) {

        for (int s=1; s<=n-i; s++) {

            printf(" ");
        }
        for (int j=1; j<=i; j++) {

            if ((i==1)||(i==n)||(j==1)||(j==i)) {

                printf("*");
            }
            else {
                
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");    

    return 0;
}