#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact c[100];
    int count = 0;
    int choice, i;
    char search[50];

    while (1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", c[count].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[count].phone);

            count++;
            printf("Contact Added Successfully.\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No Contacts Available.\n");
            }
            else
            {
                printf("\nContact List\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nContact %d\n", i + 1);
                    printf("Name : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search);

            for (i = 0; i < count; i++)
            {
                if (strcmp(search, c[i].name) == 0)
                {
                    printf("\nContact Found\n");
                    printf("Name : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    break;
                }
            }

            if (i == count)
                printf("Contact Not Found.\n");

            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}