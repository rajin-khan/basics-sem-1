/*
C program of a recursive function to find the sum of n natural numbers.
For example: the number 5 will give an output of 15 since 5+4+3+2+1 = 15.
*/

#include<stdio.h>

int sum(int x)
{
    //base case
    if (x==0)
    {
        return 0;
    }
    // main thing
    else 
    {
        return x + sum(x-1); //causes nested function loops, continues until x-1=0
    }
}

int main()
{
    int n, ans;

    printf("\nThis program will find the sum of n natural numbers.\n");

    printf("\nPlease enter n: ");
    scanf("%d", &n);

    ans = sum(n);

    printf("\nThe sum of the first %d natural numbers is: %d\n\n", n, ans);

    return 0;
}