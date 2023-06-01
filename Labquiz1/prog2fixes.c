#include<stdio.h>

int main()
{
    float fbill;
    int wbill, cbill, dbill;
    int ifiveh, ioneh, ifif, itwen, iten, ifiv, itwo, ione; //The inputs for 500, 100, 50, 20, 10, 5, 2, 1 notes
    int fiveh, oneh, fif, twen, ten, fiv, two, one; //The variables for 500, 100, 50, 20, 10, 5, 2, 1 notes
    int avltot, rem; //The available total and remainder if we have more

    printf("\nThis program will read your bill, and the notes you have,\nthen output whether it is possible to pay the bill,\nand if so, how many notes you need.\n");
    printf("\nEnter amount: ");
    scanf("%f", &fbill);

    printf("Enter your available notes: "); //Takes the input for the number of notes you have

    printf("\n500: ");
    scanf("%i", &ifiveh);

    printf("\n100: ");
    scanf("%i", &ioneh);

    printf("\n50: ");
    scanf("%i", &ifif);

    printf("\n20: ");
    scanf("%i", &itwen);

    printf("\n10: ");
    scanf("%i", &iten);

    printf("\n5: ");
    scanf("%i", &ifiv);

    printf("\n2: ");
    scanf("%i", &itwo);

    printf("\n1: ");
    scanf("%i", &ione);

    avltot = (ifiveh + ioneh + ifif + itwen + iten + ifiv + itwo + ione) ;

    printf("%d %.f", avltot, fbill);

    switch((avltot>=fbill))
    {
        case 1:
            printf("\nYou can pay the bill using the following different count of notes:\n\n");
             break;
        case 0:
            printf("\nYou cannot pay the bill.\n\n");
    }
    return 0;
}