/*
This program will print the first n palindrome numbers.
(A number is a palindrome if the number is the same as its reverse, e.g. 23432)
*/

#include<stdio.h>

int main()
{
    int n, i = 1;

    printf("\nThis program will print the first n palindrome numbers.\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    int count = 0;

    while (count<n)
    {
        int rnum = 0, k = i;

        if (i<=9)
        {
            i++;
            continue;
        }

        while (k!=0)
        {
            rnum = (rnum*10) + (k%10);
            k/=10;

            if (i==rnum)
            {
                printf("%d, ", i);
                count++;

                if (count==n)
                {
                    break;
                }
            }
        }
        i++;
    }

    printf("\b\b \n\n");

    return 0;
}