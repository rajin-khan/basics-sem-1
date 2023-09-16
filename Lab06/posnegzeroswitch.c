//This program will take a number from the user and then output whether it is positive/negative/zero (switch case):

#include<stdio.h>

int main() {

    float a;

    printf("\nThis program will take a number from you and then output whether it is positive, negative, or zero.\n\n");
    scanf("%f", &a);

    switch (a>=0) { //since the value for boolean in switch case can only be true or false, we have to use nested switches for more than one condition
    
        case 1: //if the switch is true, it is positive, or zero
            switch (a>0) { //here, the nested switch is used for a further condition
            
                case 1: 
                    printf("\nThe number is positive.\n\n");
                        break;
                case 0: //if this switch is false, it's zero
                    printf("\nThe number is zero.\n\n");
                        break;
            }
                break;
        case 0: //the only alternative is that the number is less than zero, hence negative
            printf ("\nThe number is negative.\n\n");
                break;
    }

    return 0;
}