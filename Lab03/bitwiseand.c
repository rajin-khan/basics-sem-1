/*
This program will calculate the bitwise AND of n and 1.
The input n will be taken from the user.
*/

#include<stdio.h>

int main()
{
    int n;
    int ans;
    
    printf("\nThis program will calculate the bitwise AND of n and 1.\nPlease enter a value of n:");
    scanf("%d", &n);

    ans = n&1;

    printf("\nThe bitwise AND of n and 1 is: %d\n\n", ans);

    return 0;
}

/* 
The pattern here is that when n is an even number, the bitwise AND with 1 outputs 0,
and when n is an odd number, the bitwise AND with 1 outputs 1.
*/