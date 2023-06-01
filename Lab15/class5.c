#include<stdio.h>

int main()
{
    char str[100], count = 0, n=0;

    printf("Please enter your string: ");
    scanf("%[^\n]", str);

    for (int i=0; str[i] != '\0'; i++)
    {
        count++;
    }

    char rev[count];

    for (int n=0, i=count-1; i>=0; i--, n++)
    {
        rev[i]=str[n];
    }

    printf("%s", rev);

    printf("\n\n");

    return 0;
}