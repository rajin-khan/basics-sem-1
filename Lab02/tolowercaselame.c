#include<stdio.h>

int main() {

    char letter;

    printf("Please enter an uppercase letter:");
    scanf("%c", &letter);

    printf("Your entered uppercase letter was:%c\n", letter);
    printf("The lowercase equivalent is:%c\n", letter+32);

    return 0;
}