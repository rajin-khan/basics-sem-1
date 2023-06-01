//Functions discussion in canvas, question 6

#include<stdio.h>

int numofprimes(int x, int y)
{
    int count = 0;

    for (int i=x; i<=y; i++)
    {

        int prime = 1;

        for (int k=2; k<=i/2; k++)
        {
            if (i%k==0)
            {
                prime = 0;
                break;
            }
            else
            {
                continue;
            }
        }

        if (prime!=0)
        {
            printf("%d, ", i);
        }
    }

    return count;
}

int main()
{
    int m, n, x;

    printf("\nThis program will print the prime numbers between m and n.\n");
    
    printf("\nPlease enter the value of m: ");
    scanf("%d", &m);

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\nThe prime numbers between %d and %d are: ", m, n);
    
    numofprimes(m, n);

    printf("\b\b \n\n");

    return 0;
}
