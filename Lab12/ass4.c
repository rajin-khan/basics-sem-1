//This program will read an integer and returns the reverse of that number using a user-defined function.

#include<stdio.h>

int reverse(int x);

int main()
{
    int n;

    printf("\nThis program will take your number and reverse it.\n");

    printf("\nPlease enter your number: ");
    scanf("%d", &n);

    printf("\nThe reverse of your number is : %d\n\n", reverse(n));

    return 0;
}

int reverse(int x)
{
    int rnum = 0;

    for (int i=x; i!=0; i/=10)
    {
        rnum = (rnum*10) + (i%10);
    }

    return rnum;
}