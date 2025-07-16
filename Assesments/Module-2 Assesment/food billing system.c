#include <stdio.h>

void main()
 {
    int choice, qty, totalAmount = 0;
    char order;

    do {
       // printf("------------ Menu ------------\n");
        printf("1. Pizza   price = 180rs/pcs\n");
        printf("2. Burger  price = 100rs/pcs\n");
        printf("3. Dosa    price = 120rs/pcs\n");
        printf("4. Idli    price = 50rs/pcs\n");
        printf("Please Enter your choose... : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                totalAmount += qty * 180;
                printf("Amount = %d\n", qty * 180);
                break;

            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                totalAmount += qty * 100;
                printf("Amount = %d\n", qty * 100);
                break;

            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                totalAmount += qty * 120;
                printf("Amount = %d\n", qty * 120);
                break;

            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                totalAmount += qty * 50;
                printf("Amount = %d\n", qty * 50);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                continue;
        }

        printf("Total Amount is = %d\n", totalAmount);
        printf("Do you want to place more orders? y & n : ");
        scanf(" %c", &order); // note the space before %c to capture newline

    } while (order == 'y' || order == 'Y');

    printf("Thank you for your order!\n");
}