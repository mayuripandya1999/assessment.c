//Write a program to demonstrate a Food Billing System.
#include <stdio.h>

// Function to calculate the total bill amount
float calculateTotalBill(int quantity[], float price[], int numItems) {
    float totalBill = 0.0;
    for (int i = 0; i < numItems; i++) {
        totalBill += quantity[i] * price[i];
    }
    return totalBill;
}

int main() {
    // Define the items and their prices
    char items[][20] = {"Burger", "Pizza", "Fries", "Coke"};
    float prices[] = {2.5, 3.5, 1.5, 1.0};

    int numItems = sizeof(prices) / sizeof(prices[0]);

    int quantity[numItems];
    for (int i = 0; i < numItems; i++) {
        quantity[i] = 0;
    }

    int choice;
    do {
        // Print the menu
        printf("Menu:\n");
        for (int i = 0; i < numItems; i++) {
            printf("%d. %s - $%.2f\n", i + 1, items[i], prices[i]);
        }
        printf("0. Exit\n");

        // Get user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= numItems) {
            // Increment the quantity of selected item
            quantity[choice - 1]++;
        } else if (choice != 0) {
            printf("Invalid choice!\n");
        }
    } while (choice != 0);

    // Calculate and print the total bill
    float totalBill = calculateTotalBill(quantity, prices, numItems);
    printf("\nBill Details:\n");
    for (int i = 0; i < numItems; i++) {
        if (quantity[i] > 0) {
            printf("%s - %d - $%.2f\n", items[i], quantity[i], quantity[i] * prices[i]);
        }
    }
    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}