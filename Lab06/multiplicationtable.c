//This program will print the multiplication table of n (taken from the user).

#include<stdio.h>

int main()
{
    int n, prod;

    printf("\nEnter number to print the multiplication table of: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++)//Starts with the product with 1, and then continues till 10. Replace the 10 with any number to continue till that number.
    {
        prod = n*i;
        printf("%d * %d = %d\n", n, i, prod); //Outputs x*y = ans, next lien prints x2*y = ans (one for every iteration)
    }

    return 0;
}