#include <stdio.h>

struct Library
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n, i;

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].id);

        printf("Enter Book Title: ");
        scanf("%s", book[i].title);

        printf("Enter Author Name: ");
        scanf("%s", book[i].author);
    }

    printf("\n------ Library Records ------\n");

    printf("\nID\tTitle\tAuthor\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n",
               book[i].id,
               book[i].title,
               book[i].author);
    }

    return 0;
}