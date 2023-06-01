//This program reads a temperature in Fahrenheit and print its Celcius equivalent.

#include<stdio.h>

int main()
{
     float F;
     float C;

     printf("\nPlease enter the temperature you would like to convert to Celcius (C):");
     scanf("%f", &F);

     C = (F-32)*(5/(float)9);

     printf("The temperature, in Celcius (C) is: %.2f\n\n", C);

     return 0;
}

