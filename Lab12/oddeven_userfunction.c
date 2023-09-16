/*
This program will include a function where it will take an integer (n) as a parameter,
and then return 1 if n is an odd number, 0 if not.
*/

#include<stdio.h>

int isodd(int x);

int main()
{
    int n;
    printf("\nThis program will check whether your entered number is odd or not.\nIt will return 1 if it is odd, and 0 if it is even.\n\n");

    printf("Please enter your number: ");
    scanf("%d", &n);

    int ans = isodd(n);

    printf("\n%d\n\n", ans);

    return 0;
}

int isodd(int x)
{
    return (x%2!=0); //this will compare and return 1 if true, 0 if not true
}