/*
Create a struct called BirthCertificate (see below) and read the info of two persons using it.
Then, print the name of the person who is older than the other. Also print his/her parents’ names.
*/

#include<stdio.h>

struct BirthCertificate {
    int day, month, year; //to represent birthdate
    char name[100], fatherName[100], motherName[100];
}p1, p2;

void printinfo1();
void printinfo2();

int main()
{
    printf("\n\nEnter the name of the first person: ");
    scanf("%[^\n]", p1.name);

    printf("\nEnter his/her father's name: ");
    scanf(" %[^\n]", p1.fatherName);

    printf("\nEnter his/her mother's name: ");
    scanf(" %[^\n]", p1.motherName);

    printf("\nEnter his/her date of birth: \n");
    scanf("%d %d %d", &p1.day, &p1.month, &p1.year);

    printf("\n\nEnter the name of the second person: ");
    scanf(" %[^\n]", p2.name);

    printf("\nEnter his/her father's name: ");
    scanf(" %[^\n]", p2.fatherName);

    printf("\nEnter his/her mother's name: ");
    scanf(" %[^\n]", p2.motherName);

    printf("\nEnter his/her date of birth: \n");
    scanf("%d %d %d", &p2.day, &p2.month, &p2.year);

    if (p1.year<p2.year)
    {
        printinfo1(0);
    }
    else if (p1.month<p2.month)
        {
            printinfo1(0);
        }
    else if (p1.day<p2.day)
        {
            printinfo1(0);
        }

    else if (p2.year<p1.year)
        {
            printinfo2(0);
        }
    else if (p2.month<p1.month)
        {
            printinfo2(0);
        }
    else if (p2.day<p1.day)
        {
            printinfo2(0);
        }

    return 0;
}

void printinfo1(int x)
{
    printf("\nThe older person is: ");

    puts(p1.name);

    printf("And his/her father's name is: ");

    puts(p1.fatherName);

    printf("And his/her mother's name is: ");

    puts(p1.motherName);

    printf("\n");
}

void printinfo2(int x) 
{
    printf("\nThe older person is: ");

    puts(p2.name);

    printf("And his/her Father's name is: ");

    puts(p2.fatherName);

    printf("And his/her Mother's name is: ");

    puts(p2.motherName);

    printf("\n");
}