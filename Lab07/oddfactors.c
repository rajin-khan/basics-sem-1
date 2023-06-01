//This program will print all the odd factors of a given number.

#include<stdio.h>

int main()
{
    int num;

    printf("\nThis program will print all the odd factors of a given number.\n\n");

    printf("Enter your number: ");
    scanf("%d", &num);

    printf ("\nAll the odd factors of %d are: ", num);

    for (int i=1; i<=(num/2); i++)
    {
        if ((num%i)==0)
        {
            if ((i%2)!=0)
            {
                printf ("%d, ", i);
            }
        }
    }

    printf("\b\b \n\n");

    return 0;
}