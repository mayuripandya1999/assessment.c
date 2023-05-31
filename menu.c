//Display the Menu using appropriate codes.
#include <stdio.h>

int main() {
    int choice;
    
    while (1) {
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                // Perform the action for Option 1
                break;
            case 2:
                printf("You selected Option 2.\n");
                // Perform the action for Option 2
                break;
            case 3:
                printf("You selected Option 3.\n");
                // Perform the action for Option 3
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
        
        printf("\n");
    }
    
    return 0;
}