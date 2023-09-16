//Q1

#include <stdio.h>

int main()
{
    int num, lnum, fnum, dnum, dig=0;

    printf("Please enter your number: ");
    scanf("%d", &num);

    lnum=num; //the variable for calculating last digit
    fnum=num; //the variable for calculating first digit
    dnum=num; //the variable for calculating number of digits

    while(dnum!=0) //counting the number of digits
    {
        dnum/=10;
        dig++;
    }

    if (dig<5)
    {
        printf("Invalid Number\n");
    }
    else
    {
        while(fnum>=9) //the loop continues (and the last digit is dropped) until fnum is a single digit number
        {
            fnum/=10;
        }

        printf("First digit = %d", fnum);

        printf(" and the last digit is = %d\n", lnum%10); //mod 10 gives the last digit

    }

    return 0;
}
