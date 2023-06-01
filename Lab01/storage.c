#include<stdio.h>

int main()
{
    int num;
    float deci;
    char name[20];

    printf("Please enter a whole number:");
    scanf("%d", &num);

    printf("Please enter a decimal number:");
    scanf("%f", &deci);

    printf("Please enter your name:");
    scanf("%s", &name);

    printf("Your number is: %d\n", num);
    printf("Your decimal number is: %.2f\n", deci);
    printf("Your name  is: %s\n", name);
    
    return 0;
}