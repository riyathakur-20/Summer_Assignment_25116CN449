#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Department: ");
                scanf("%s", emp[n].department);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

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
                    printf("\nEmployee Records:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID : %d", emp[i].id);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nDepartment  : %s", emp[i].department);
                        printf("\nSalary      : %.2f\n", emp[i].salary);
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
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);

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
                printf("Enter Employee ID to Update: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == id)
                    {
                        printf("Enter New Name: ");
                        scanf("%s", emp[i].name);

                        printf("Enter New Department: ");
                        scanf("%s", emp[i].department);

                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Employee Record Updated Successfully!\n");

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

            case 6:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}