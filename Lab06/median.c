//This program will take 3 numbers from user and then output the median of them (switch-case).

#include<stdio.h>

int main()
{
    float a, b, c;
    float high, low, med; //the variables for storing the highest, the lowest, and the median value

    printf("\nThis program will take 3 numbers and then output the median of them.\n\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a>=c)&&(a>=b)) //checks whether a is the highest
    {
        high = a;
    }
    else if ((b>=c)&&(b>=a)) //checks whether b is the highest
        {
            high = b;
        }
    else if ((c>=b)&&(c>=a)) //you get it.
        {
            high = c;
        }

    if ((a<=c)&&(a<=b)) //checks whether a is the lowest, and so on and so forth
    {
        low = a;
    }
    else if ((b<=c)&&(b<=a))
        {
            low = b;
        }
    else if ((c<=b)&&(c<=a))
        {
            low = c;
        }
    
    med = (a+b+c) - (high+low); //here, the highest and lowest are subtracted from the sum of the three numbers, because the only remaining number would be the middle/median number.

    printf("\nThe median is %.f.\n\n", med);

    return 0;
}