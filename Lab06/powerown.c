//This program will find the power of a number (using for loop).

#include<stdio.h>

int main()
{
    int base, power, prod = 1 ; //inputs for base and power, the final product, and a 'dummy' base (will be explained later)

    printf("\nThis program will find the power of a number (using for loop).\n\n");

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);
    
    for (int i=1; i<=power; i++) //iterates till the base is multiplied the number of times of the power
    {
        prod *= base; // for the rest of the iterations, the base keeps on multiplying.     
    }

    printf("\n%d to the power %d = %d\n\n", base, power, prod);

    return 0;
}

