#include<stdio.h>
#include<math.h>

int main()
{
    float fbill, wbill, cbill;
    int ifiveh, ioneh, ifif, itwen, iten, ifiv, itwo, ione; //The inputs for 500, 100, 50, 20, 10, 5, 2, 1 notes
    int fiveh, oneh, fif, twen, ten, fiv, two, one; //The variables for 500, 100, 50, 20, 10, 5, 2, 1 notes
    int avltot, rem; //The available total and remainder if we have more

    printf("\nThis program will read your bill, and the notes you have,\nthen output whether it is possible to pay the bill,\nand if so, how many notes you need.\n");
    printf("\nEnter amount: ");
    scanf("%f", &fbill);

    fbill = fbill - 0.5;
    wbill = fbill/1;

    switch((wbill<fbill))
    {
        case 1:
            cbill = fbill/1;
            printf("\nYou have to pay: %.fTk", cbill);
                break;

        case 0:
            cbill = fbill/1;
            cbill++;
            printf("You have to pay: %.fTk", cbill);
                break;
    }
    


    printf("\nEnter your available notes: "); //Takes the input for the number of notes you have

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

    avltot = ((ifiveh*500) + (ioneh*100) + (ifif*50) + (itwen*20) + (iten*10) + (ifiv*5) + (itwo*2) + (ione*1)) ;

    switch(avltot>=cbill)
    {
        case 1:
            printf("\nYou can pay the bill using the following different count of notes:\n\n");
        
            switch (ifiveh!=0)
            {
                case 1:
                    fiveh = cbill/500;
                        break;
                    switch (fiveh<ifiveh)
                    {
                        case 1:
                        printf("500: %i\n", fiveh);
                        cbill = cbill - (500*fiveh);
                            break;

                    case 0:
                        printf("500: %i\n", ifiveh);
                        cbill = cbill - (500*ifiveh);
                            break;
                    }
                case 0:
                    printf ("500: 0\n");
                        break;
            }

        case 0:
            printf("\nYou cannot pay the bill.\n\n");
    }

    return 0;

}
