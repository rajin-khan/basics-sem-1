/*

This program that determines a student’s grade.
The program will read three scores and determine the grade based on the following rules:

if the average score is equal to or above 90%, grade = A 
if the average score is between 70% and 89.99%, grade = B 
if the average score is between 50% and 69.99%, grade = C 
if the average score is below 50%, grade = F

*/

#include<stdio.h>

int main()
{
    float sc1, sc2, sc3; //the three scores
    float total, avg; //the total, and the average grade

    printf("\nThis program determines a student's grade from three scores.\n");
    printf("\nPlease enter the three scores (out of 100).\n");

    printf("\nScore 1: ");
    scanf("%f", &sc1);
    printf("\nScore 2: ");
    scanf("%f", &sc2);
    printf("\nScore 3: ");
    scanf("%f", &sc3);

    total = sc1+sc2+sc3; //tallies the three grades
    avg = (total/(float)3); //converts it to float because we need the decimal value of the result

    if (avg>=90)
    {
        printf("\nGrade = A (%.2f%%)\n\n", avg);
    }
    else if ((avg>=70)&&(avg<90))
        {
            printf("\nGrade = B (%.2f%%)\n\n", avg);
        }
    else if ((avg>=50)&&(avg<70))
        {
            printf("\nGrade = C (%.2f%%)\n\n", avg);
        }
    else
    {
        printf("\nGrade = F (%.2f%%)\n\n", avg);
    }

    return 0;
}