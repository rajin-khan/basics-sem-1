#include<stdio.h>

int main()
{
    char str[100], count= 0;

    printf("Please enter your string: ");
    scanf("%[^\n]", str);

    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            count++;
        }
    }

    printf("\nThe number of lowercase letters you have input is %d.\n\n", count);

    return 0;
}