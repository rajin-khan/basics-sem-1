/*
This program will print the digits of a given number in words using recursion.
Sample input/output:
Enter an integer: 5431
Number in words: Five Four Three One
*/

#include<stdio.h>

void digprint(int x);

int main()
{
    int n, rev = 0;;

    printf("\nThis program will display a given number in words starting from its leftmost digit.\n\n");

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i=n; i!=0; i/=10)
    {
        rev = (rev*10) + i%10;
    }   

    printf("\nNumber in words: ");

    digprint(rev);

    printf("\n\n");

    return 0;
}

void digprint(int x)
{
    if (x<10)
    {
        switch (x)
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
    }

    else
    {
        switch (x%10)
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
        digprint(x/10);
    }
}