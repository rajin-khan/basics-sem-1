/*
This program will print all the palindrome numbers between m and n.
(A number is a palindrome if the number is the same as its reverse, e.g. 23432)
*/

#include<stdio.h>
#include<math.h>

int main() {

    int m, n;

    printf("\nThis program will print all the palindrome numbers between m and n.\n\n");

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=m; i<=n; i++) {

        int k = i, rnum = 0;

        if (i<=9) {

            continue;
        }

        while (k!=0) {

            rnum = (rnum*10) + (k%10);
            k/=10;

            if (i==rnum) {
                
                printf("%d, ", rnum);
            }
        }
    }

    printf("\b\b \n\n");

    return 0;
}