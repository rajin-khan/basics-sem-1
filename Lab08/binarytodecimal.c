//This program will convert a given Binary number to its decimal equivalent.

#include<stdio.h>
#include<math.h>

int main()
{
    int bi, xbi, dbi, obi, dec=0;

    printf("\nThis program will convert your binary number to its decimal equivalent.\n\n");

    printf("Enter a binary number: ");
    scanf ("%d", &bi);

    obi = bi;
    
    dbi = bi;
    xbi = bi;

    int ndig = 0;
    while (dbi!=0)
    {
        dbi /=10;
        ndig++;
    }

    xbi = bi % 10;

    for (int i=0; i<=ndig; i++)
    {
        if (xbi==0)
        {
            bi/=10;
            xbi = bi % 10;
        }
        else
        {
            dec += pow(2, i);
            bi/=10;
            xbi = bi % 10;
        }
    }

    printf("\nThe decimal equivalent of %d is = %d\n\n", obi, dec);

    return 0;
}