#include<stdio.h>

int main()
{
    char str[100];

    printf("Please enter your name: ");

    scanf("%[^\n]", str);
    
    return 0;
}