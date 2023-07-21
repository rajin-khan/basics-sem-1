/*
This program will take the first letter of 4 fruits as in input, as follows:
M -> Mango
A -> Apple
B -> Banana
C -> Cherry
And suggest the prices of the fruits as an output.
*/

#include<stdio.h>
#include<ctype.h>

int main() {

    char name;

    printf("\nThis program will take the first letter of 4 a fruit as in input, and output suggested fruit prices.\n");

    printf("\nPlease enter:\n\nThe letter 'M' for Mango,\n");
    printf("or, 'A' for Apple,\n");
    printf("or, 'B' for Banana,\n");
    printf("or, 'C' for Cherry.\n\n");

    scanf("%c", &name);

    name = tolower(name);

    switch(name) {
        
        case 'm':
            printf("\nThe suggested price for Mangoes is = Tk.500/kg\n\n");
            break;
        case 'a':
            printf("\nThe suggested price for Apples is = Tk.250/kg\n\n");
            break;
        case 'b':
            printf("\nThe suggested price for Bananas is = Tk.130/kg\n\n");
            break;
        case 'c':
            printf("\nThe suggested price for Cherries is = Tk.270/kg\n\n");
            break;
        default:
            printf("\nInvalid input. Please enter an appropriate letter from the ones specified.\n\n");
    }
    
    return 0;
}