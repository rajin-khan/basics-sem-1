#include<stdio.h>

struct dates
{
    int bday, bmonth, byear;
    int sday, smonth, syear;
};

struct Employees
{
    char name[100];
    struct dates DOB;
    struct dates startingdate;
    float salary;
} employee[4];

int main()
{
    float maxsal;

    int recyear, recmonth, recday;

    for (int i=0; i<4; i++)
    {
        printf("\n\nName: ");
        scanf(" %[^\n]", employee[i].name);

        printf("\nD.O.B: \n");
        scanf("%d %d %d", &employee[i].DOB.bday, &employee[i].DOB.bmonth, &employee[i].DOB.byear);

        printf("\nStarting date: \n");
        scanf("%d %d %d", &employee[i].startingdate.sday, &employee[i].startingdate.smonth, &employee[i].startingdate.syear);

        printf("\nSalary: ");
        scanf("%f", &employee[i].salary);
    }

    for (int i=1; i<4; i++)
    {
        if (employee[i].salary>employee[i-1].salary)
        {
            maxsal = employee[i].salary;
        }
        else
        {
            maxsal = employee[i-1].salary;
        }
    }

    for (int i=0; i<4; i++)
    {
        if (employee[i].salary == maxsal)
        {
            printf("\nInfo of the employee with the highest salary: \n\n");

            printf("Name: ");
            puts(employee[i].name);

            printf("D.O.B: %d/%d/%d", employee[i].DOB.bday, employee[i].DOB.bmonth, employee[i].DOB.byear);

            printf("\nStarting Date: %d/%d/%d", employee[i].startingdate.sday, employee[i].startingdate.smonth, employee[i].startingdate.syear);

            printf("\nSalary: %.f\n\n", employee[i].salary);
        }
    }

/*

    for (int i=1; i<4; i++)
    {
        if (employee[i].startingdate.syear>employee[i-1].startingdate.syear)
        {
            recyear = employee[i].startingdate.syear;
            recmonth = employee[i].startingdate.smonth;
            recday = employee[i].startingdate.sday;
        }
        else if ((employee[i].startingdate.syear<employee[i-1].startingdate.syear)
            {
                recyear = employee[i-1].startingdate.syear;
                recmonth = employee[i].startingdate.smonth;
                recday = employee[i].startingdate.sday;
            }
        
        else if (employee[i].startingdate.smonth>employee[i-1].startingdate.smonth)
            {
               recmonth = employee[i].startingdate.smonth;
            }
        else if (employee[i].startingdate.smonth<employee[i-1].startingdate.smonth)
            {
               recmonth = employee[i-1].startingdate.smonth;
            }

        else if (employee[i].startingdate.sday>employee[i-1].startingdate.sday)
            {
                recday = employee[i].startingdate.sday;
            }
        else if (employee[i].startingdate.sday<employee[i-1].startingdate.sday)
            {
                recday = employee[i-1].startingdate.sday;
            }
    }

    for (int i=0; i<4; i++)
    {
        if ((employee[i].startingdate.syear==recyear) && (employee[i].startingdate.smonth==recmonth) && (employee[i].startingdate.sday==recday))
        {
            printf("The most recently joined employee is: ");
            puts(employee[i].name);
            printf("\bwith starting date: %d/%d/%d\n\n", employee[i].startingdate.sday, employee[i].startingdate.smonth, employee[i].startingdate.syear);
        }
    }

*/

    return 0;
}

