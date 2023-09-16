//Write C program to check if an input string is a palindrome (e.g. “madam”, “dad”, etc.) or not.

#include<stdio.h>

int main()
{
    char str[100], rev[100], count = 0, n = 0, pal = 1;

    printf("\nThis program will check if your word is a palindrome.\n\n");
    
    printf("Enter your word: ");
    scanf("%[^\n]", str);

    for (int i=0; str[i]!='\0'; i++)
    {
        count++;
    }

    for (int j=0, i=count-1; i>=0; i--, j++)
    {
        rev[i] = str[j];
    }

    for (int i=0; (str[i]!='\0' && rev[i]!='\0'); i++)
    {
        if (rev[i]!=str[i])
        {
            pal = 0;
        }        
    }

    if (pal==1)
    {
        printf("\n%s is a palindrome.\n\n", rev);
    }
    else
    {
        printf("\n%s is not a palindrome.\n\n", str);
    }

    return 0;
}