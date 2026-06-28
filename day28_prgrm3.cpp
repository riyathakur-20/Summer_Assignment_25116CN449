#include <stdio.h>

int main()
{
    int totalSeats = 10;
    int booked = 0;
    int choice, seats;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Number of Seats: ");
            scanf("%d", &seats);

            if (booked + seats <= totalSeats)
            {
                booked += seats;
                printf("Ticket Booked Successfully.\n");
            }
            else
            {
                printf("Seats Not Available!\n");
            }
            break;

        case 2:
            printf("Available Seats = %d\n", totalSeats - booked);
            break;

        case 3:
            printf("Enter Seats to Cancel: ");
            scanf("%d", &seats);

            if (seats <= booked)
            {
                booked -= seats;
                printf("Ticket Cancelled Successfully.\n");
            }
            else
            {
                printf("Invalid Number!\n");
            }
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}