/*
This program will include a function where it will take a character (c) as a parameter,
and then print "LOWER" if it is a lower case letter,
print "UPPER" if it is a uppercase letter,
print "DIGIT" if it is a digit, 
and print "SPECIAL" if it is neither of them.
*/

#include<stdio.h>

void charcheck(char c);

int main()
{
    char c;
    printf("\nThis program will check your entered character and tell if it an uppercase, lowercase, number, or special character.\n\n");

    printf("Please enter your character: ");
    scanf("%c", &c);

    charcheck(c);

    return 0;
}

void charcheck(char x)
{
    if ((x>='A') && (x<='Z'))
    {
        printf("\nUPPER\n\n");
    }
    else if ((x>='a') && (x<='z'))
        {
            printf("\nLOWER\n\n");
        }
    else if ((x>='0') && (x<='9'))
        {
            printf("\nDIGIT\n\n");
        }
    else
    {
        printf("\nSPECIAL\n\n");
    }
}