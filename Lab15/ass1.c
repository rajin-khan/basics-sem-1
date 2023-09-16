//Write a C program that deletes all duplicate letters from an input string.

#include<stdio.h>

int main()
{
    char string[100], unique[100];
    int k=0;

    printf("Enter a string: ");
    scanf("%[^\n]", string);

    for (int i=0; string[i]!='\0'; i++)
    {
        if (string[i]==string[i+1])
        {
            continue;
        }
        else
        {
            unique[k]=string[i];
            k++;
        }
    }

    printf("%s", unique);

    return 0;
}