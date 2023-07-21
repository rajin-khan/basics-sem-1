//This program will find the maximum between two numbers. (switch case example)

#include<stdio.h>

int main() {

    float a, b;
    
    printf("\nThis program will find the maximum between two numbers.\n");

    printf("\nPlease enter two numbers:\n\n");
    scanf("%f %f", &a, &b);

    switch(a>=b) {

        case 1:
            switch (a==b) {
                
                case 1:
                    printf("\nThe numbers are equal.\n\n");
                    break;
                case 0:
                    printf("\nThe maximum number is: %.2f\n\n", a);
                    break;
            }
            break;
        case 0:
            printf("\nThe maximum number is: %.2f\n\n", b);
            break;
    }

    return 0;
}