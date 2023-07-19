//This program will check whether an entered character is a hexidecimal. (if else)

#include<stdio.h>
#include<ctype.h>

int main() {

    char hex;

    printf("\nThis program will check whether a single character or digit you enter is a hexidecimal.\n");

    printf("\nPlease enter a single character or digit: ");
    scanf("%c", &hex);

    hex = tolower (hex); //Converts Uppercase letters to lowercase letters (part of the ctype library functions), makes the code shorter

    if ((hex>='0' && hex<='9')||(hex>='a' && hex<='f')) {

        printf("\nIt is a valid hexadecimal digit.\n\n");
    }
    else {
        
        printf("\nIt is not a valid hexadecimal digit.\n\n");
    }

    return 0;
} 