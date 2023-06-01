#include<stdio.h>

 int main()
 {
     float C;
     float F;

     printf("\nPlease enter the temperature you would like to convert to Fahrenheit (F):");
     scanf("%f", &C);

     F = (C*(float)9/5)+32;

     printf("The temperature, in Fahrenheit (F) is: %.2f\n\n", F);

     return 0;

 }