#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n, i, choice, searchId;
    int count = 0;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("How many books to add: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\nBook %d\n", count + 1);

                printf("Enter Book ID: ");
                scanf("%d", &book[count].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book[count].name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[count].author);

                count++;
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nBook Details\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID : %d\n", book[i].id);
                    printf("Name : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++)
            {
                if (book[i].id == searchId)
                {
                    printf("\nBook Found\n");
                    printf("ID : %d\n", book[i].id);
                    printf("Name : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);
                    break;
                }
            }

            if (i == count)
                printf("Book not found.\n");

            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}