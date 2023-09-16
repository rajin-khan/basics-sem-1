//This program will read two numbers from the user and then print the largest of them (switch-case).

#include<stdio.h>

int main()
{
    int a, b;

    printf("\nThis program will read two numbers then print the largest of them.\n");

    printf("\nPlease enter two numbers.\n\n");
    scanf("%d %d", &a, &b);

    switch (a>=b) {

        case 1:
            switch (a>b) {
                
                case 1:
                    printf("\nThe largest number is %d.\n\n", a);
                        break;
                case 0:
                    printf("\nThe numbers are equal.\n\n");
                        break;
            }
                break;
        case 0:
            printf("\nThe largest number is %d.\n\n", b);
                break;
    }

    return 0;
}