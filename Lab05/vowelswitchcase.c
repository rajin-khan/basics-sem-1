//This program will check whether an entered letter is a vowel. (switch case)

#include<stdio.h>
#include<ctype.h>

int main() {

    char let;

    printf("\nThis program will check whether a single letter you enter is a vowel.\n");

    printf("\nPlease enter a single letter: ");
    scanf("%c", &let);

    let = tolower(let);

    switch(let) {
        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nIt is a vowel.\n\n");
            break;
        default:
            printf("\nIt is a consonant.\n\n");
    }

    return 0;
}