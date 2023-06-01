//Write a program that prints the no. of odd & no. of even numbers in an array.

#include<stdio.h>

int main()
{
    int num, n, odd=0, even=0;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int oddev[n];

    printf("\nPlease enter your numbers: ");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &oddev[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (oddev[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("The number of even numbers in your array are: %d\n", even);
    printf("The number of odd numbers in your array are: %d\n\n", odd);

    return 0;
}