#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, value, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Sum\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 2:
            printf("Enter position and value: ");
            scanf("%d%d", &pos, &value);

            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid Position!\n");
            }
            else
            {
                for (i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;
                printf("Element Inserted Successfully.\n");
            }
            break;

        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            if (pos < 1 || pos > n)
            {
                printf("Invalid Position!\n");
            }
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                printf("Element Deleted Successfully.\n");
            }
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d", &value);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    printf("Element Found at Position %d\n", i + 1);
                    break;
                }
            }

            if (i == n)
                printf("Element Not Found.\n");
            break;

        case 5:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d\n", sum);
            break;

        case 6:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}