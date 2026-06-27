#include <stdio.h>

struct Salary
{
    int id;
    char name[50];
    float monthlySalary;
};

int main()
{
    struct Salary emp[100];
    int n = 0, choice, i, id, found;
    float annualSalary, bonus;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Calculate Annual Salary\n");
        printf("5. Calculate Bonus (10%%)\n");
        printf("6. Update Salary\n");
        printf("7. Delete Employee\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Monthly Salary: ");
                scanf("%f", &emp[n].monthlySalary);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No Employee Records Found.\n");
                }
                else
                {
                    printf("\nEmployee Salary Records:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID     : %d", emp[i].id);
                        printf("\nEmployee Name   : %s", emp[i].name);
                        printf("\nMonthly Salary  : %.2f\n", emp[i].monthlySalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == id)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID     : %d\n", emp[i].id);
                        printf("Employee Name   : %s\n", emp[i].name);
                        printf("Monthly Salary  : %.2f\n", emp[i].monthlySalary);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found.\n");
                }

                break;

            case 4:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == id)
                    {
                        annualSalary = emp[i].monthlySalary * 12;

                        printf("\nEmployee Name : %s", emp[i].name);
                        printf("\nMonthly Salary: %.2f", emp[i].monthlySalary);
                        printf("\nAnnual Salary : %.2f\n", annualSalary);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found.\n");
                }

                break;

            case 5:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == id)
                    {
                        bonus = emp[i].monthlySalary * 0.10;

                        printf("\nEmployee Name : %s", emp[i].name);
                        printf("\nMonthly Salary: %.2f", emp[i].monthlySalary);
                        printf("\nBonus (10%%)   : %.2f\n", bonus);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found.\n");
                }

                break;

            case 6:
                printf("Enter Employee ID to Update Salary: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == id)
                    {
                        printf("Enter New Monthly Salary: ");
                        scanf("%f", &emp[i].monthlySalary);

                        printf("Salary Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found.\n");
                }

                break;

            case 7:
                printf("Enter Employee ID to Delete: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == id)
                    {
                        int j;

                        for (j = i; j < n - 1; j++)
                        {
                            emp[j] = emp[j + 1];
                        }

                        n--;

                        printf("Employee Record Deleted Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found.\n");
                }

                break;

            case 8:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}