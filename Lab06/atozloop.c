//This program will display all the letters of the alphabet (a-z, in both uppercase and lwoercase).

#include<stdio.h>

int main() {

    int let;

    printf("\nThe lowercase letters of the alphabet are:\n");

    for (let='a'; let<='z'; let++) { //iterates with the lower treashold being the ASCII value of a, and the upper one being the ASCII value of z.
    
        if (let!='z') { //makes sure that all letters are printed serially until z
        
            printf("%c ", let);
        }
        else {

            printf("%c \n", let); //here, for z, the code shifts and the next print statement goes to the new line, making it look better
        }
        
    }

    printf("\nThe uppercase letters of the alphabet are:\n");

    for (let='a'; let<='z'; let++) {

        if (let!='z') {
            
            printf("%c ", let-32); //as the capital of the ASCII value of A is 32 less than a, and so on and so forth.
        }
        else { //the condition for making it print Z and ending the code on the next line
        
            printf("%c \n\n", let-32); 
        }    
    }
    
    return 0;
}