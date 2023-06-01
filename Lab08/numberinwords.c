//This program will display a given number in words starting from its leftmost digit.

#include<stdio.h>
#include<math.h>

int main()
{
    int num, cnum, rnum=0;

    printf("\nThis program will display a given number in words starting from its leftmost digit.\n\n");

    printf("Enter your number: ");
    scanf("%d", &num);

    cnum = num;

    //calculating the reverse of the number

    for (int i=cnum; cnum!=0; cnum/=10)
    {
        rnum = (rnum*10)+(cnum%10);
    }

    //reverse calculated, then read from right to left as that's how it's read when you drop off the last digit each time at the end of the loop

    printf("\n");

    do
    {
        switch (rnum%10)
        {
            case 0: 
                printf("Zero "); 
                    break;
            
            case 1: 
                printf("One "); 
                    break;
            
            case 2: 
                printf("Two "); 
                    break;
            
            case 3: 
                printf("Three "); 
                    break;
            
            case 4: 
                printf("Four "); 
                    break;
            
            case 5: 
                printf("Five "); 
                    break;
            
            case 6: 
                printf("Six "); 
                    break;
            
            case 7: 
                printf("Seven "); 
                    break;
            
            case 8: 
                printf("Eight "); 
                    break;
            
            case 9: 
                printf("Nine "); 
                    break;
        }
        
        rnum /= 10; //last digit dropped off

    } while (rnum!=0);

    printf("\n\n");
    
    return 0;
}