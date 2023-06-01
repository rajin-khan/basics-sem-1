/*
This program will print the sum of all the palindrome numbers between m and n.
(A number is a palindrome if the number is the same as its reverse, e.g. 23432)
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int m, n, sum = 0;
    printf("\nThis program will print the sum of all the palindrome numbers between m and n.\n\n");

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=m; i<=n; i++)
    {
        int k, rnum = 0;
        k = i;

        if (i<=9)
        {
            continue;
        }

        while (k!=0)
        {
            rnum = (rnum*10) + (k%10);
            k/=10;

            if (i==rnum)
            {
                sum += rnum;
                printf("%d + ", i);
            }
        }
    }

    printf("\b\b= %d \n\n", sum);

    return 0;
}