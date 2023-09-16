/*
This program will read the bill and the number of each type of note (500, 100, 50, 20, 10, 5, 2, 1),
from the user, and then output whether it is possible for the user to pay the bill or not. 
If it is possible, the number of each notes required will also be output.
*/

#include<stdio.h>

int main() {

    int bill;
    int ifiveh, ioneh, ifif, itwen, iten, ifiv, itwo, ione; //The inputs for 500, 100, 50, 20, 10, 5, 2, 1 notes
    int fiveh, oneh, fif, twen, ten, fiv, two, one; //The variables for 500, 100, 50, 20, 10, 5, 2, 1 notes
    int avltot, rem; //The available total and remainder if we have more

    printf("\nThis program will read your bill, and the notes you have,\nthen output whether it is possible to pay the bill,\nand if so, how many notes you need.\n");
    printf("\nEnter your bill: ");
    scanf("%i", &bill);

    printf("\nEnter your available notes: "); //Takes the input for the number of notes you have

    printf("\n500: ");
    scanf("%i", &ifiveh);

    printf("100: ");
    scanf("%i", &ioneh);

    printf("50: ");
    scanf("%i", &ifif);

    printf("20: ");
    scanf("%i", &itwen);

    printf("10: ");
    scanf("%i", &iten);

    printf("5: ");
    scanf("%i", &ifiv);

    printf("2: ");
    scanf("%i", &itwo);

    printf("1: ");
    scanf("%i", &ione);

    avltot = (ifiveh*500)+(ioneh*100)+(ifif*50)+(itwen*20)+(iten*10)+(ifiv*5)+(itwo*2)+(ione*1); //Calculates the sum of the money input

    if (avltot>bill) {
        
        rem = avltot - bill; //Calculates the remainder if the available total is more than the bill
    }

    if (avltot>=bill) {
        
        printf("\nYou can pay the bill! Do so by using the following counts of different notes:\n");

        if (ifiveh!=0) { //Verifies whether the user has input a specific kind note, then carries out the program

            fiveh = bill/500;
            if(fiveh<ifiveh) //If the calculated number of notes required is less than what was input, it prints the calculated number
            {
                printf("500: %i\n", fiveh);
                bill = bill - (500*fiveh);
            }
            else //If the calculated notes is equal to the input, it just outputs the number that the user input in the first place
            {
                printf("500: %i\n", ifiveh);
                bill = bill - (500*ifiveh);
            }
        }
        else { //If they haven't input a specific note, it shows that it's zero
        
            printf ("500: 0\n");
        }
        if (ioneh!=0) { //Moves on to the next note, and so on and so forth

            oneh = bill/100;
            if(oneh<ioneh) {

                printf("100: %i\n", oneh);
                bill = bill - (100*oneh);
            }
            else {

                printf("100: %i\n", ioneh);
                bill = bill - (100*ioneh);
            }
        }
        else {

            printf ("100: 0\n");
        }
        if (ifif!=0) {

            fif = bill/50;
            if(fif<ifif) {

                printf("50: %i\n", fif);
                bill = bill - (50*fif);
            }
            else {

                printf("50: %i\n", ifif);
                bill = bill - (50*ifif);
            }
        }
        else {

            printf ("50: 0\n");
        }
        if (itwen!=0) {

            twen = bill/20;
            if(twen<itwen) {

                printf("20: %i\n", twen);
                bill = bill - (20*twen);
            }
            else {

                printf("20: %i\n", itwen);
                bill = bill - (20*itwen);
            }
        }
        else {

            printf ("20: 0\n");
        }
        if (iten!=0) {

            ten = bill/10;
            if(ten<iten) {

                printf("10: %i\n", ten);
                bill = bill - (10*ten);
            }
            else {

                printf("10: %i\n", iten);
                bill = bill - (10*iten);
            }
        }
        else {

            printf ("10: 0\n");
        }
        if (ifiv!=0) {

            fiv = bill/5;
            if(fiv<ifiv) {

                printf("5: %i\n", fiv);
                bill = bill - (5*fiv);
            }
            else {

                printf("5: %i\n", ifiv);
                bill = bill - (5*ifiv);
            }
        }
        else {

            printf ("5: 0\n");
        }
        if (itwo!=0) {

            two = bill/2;
            if(two<itwo) {

                printf("2: %i\n", two);
                bill = bill - (2*two);
            }
            else {

                printf("2: %i\n", itwo);
                bill = bill - (2*itwo);
            }
        }
        else {

            printf ("2: 0\n");
        }
        if (ione!=0) {

            one = bill/1;
            if(one<ione) {

                printf("1: %i\n", one);
                bill = bill - (1*one);
            }
            else {

                printf("1: %i\n", ione);
                bill = bill - (1*ione);
            }
        }
        else {

            printf ("1: 0\n");
        }
        if (rem!=0) {

            printf("\nYour remaining amount is: %i\n\n", rem);
        }
    }
    else { //If the available total is less than the bill, it outputs an error message
    
        printf("\nThe total you have is %i.\n", avltot);
        printf("You cannot pay the bill with the notes you have!\n\n");
    }

    return 0;
}