//This program will compute the number of notes in a given amount of money.

#include<stdio.h>

int main()
{
    float money;
    int fiveh, oneh, fif, twen, ten, fiv, two, one; //The variables for 500, 100, 50, 20, 10, 5, 2, 1 notes

    printf("\nThis program will compute the number of notes in a given amount of money.\n");
    printf("\nEnter amount of money: ");
    scanf("%f", &money);

    fiveh = money/500;
    money = money - (500*fiveh);

    oneh = money/100;
    money = money - (100*oneh);

    fif = money/50;
    money = money - (50*fif);

    twen = money/20;
    money = money - (20*twen);

    ten = money/10;
    money = money - (10*ten);

    fiv = money/5;
    money = money - (5*fiv);

    two = money/2;
    money = money - (2*two);

    one = money/1;
    
    printf("\nThe total number of notes:\n500 : %i \n100 : %i \n50 : %i \n20 : %i \n10 : %i \n5 : %i \n2 : %i \n1 : %i\n\n", fiveh, oneh, fif, twen, ten, fiv, two, one);
    
    return 0;
}
