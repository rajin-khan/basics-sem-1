/*
Create a struct called Student (see below) and read the records of two students using it. 
Then print the name and id of the student who has higher CGPA than the other.
*/

#include<stdio.h>

struct Student
{
    char name[50];
    int id;
    float CGPA;
}   s1, s2;

int main()
{
    printf("\n\nEnter the name of the first student: ");
    scanf("%[^\n]", s1.name);

    printf("\nEnter the ID of the first student: ");
    scanf("%d", &s1.id);

    printf("\nEnter the CGPA of the first student: ");
    scanf("%f", &s1.CGPA);

    printf("\n\nEnter the name of the second student: ");
    scanf(" %[^\n]", s2.name);

    printf("\nEnter the ID of the second student: ");
    scanf("%d", &s2.id);

    printf("\nEnter the CGPA of the second student: ");
    scanf("%f", &s2.CGPA);

    if (s1.CGPA>s2.CGPA)
    {
        printf("\n\nThe student with the higher CGPA is: ");

        puts(s1.name);

        printf("ID no: %d\n\n", s1.id);      
    }
    else
    {
        printf("\n\nThe student with the higher CGPA is: ");

        puts(s2.name);

        printf("ID no: %d\n\n", s2.id);
    }

    return 0;
}