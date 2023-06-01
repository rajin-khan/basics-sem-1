//This program will print a right justified hollow right angled triangle of height n.

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print a right justified hollow right angled triangle of height n.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int s=1; s<=n-i; s++) 
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
        if ((i==1)||(i==n)||(k==1)||(k==i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    printf("\n");

    return 0;
}