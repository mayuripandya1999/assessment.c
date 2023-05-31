//For Menu kinds of Programming , use the core logic of Loops/conditional statements.
#include <stdio.h>

int main() {
    int choice;
    
    do {
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("You selected Option 1.\n");
                // Add your code for Option 1 here
                break;
            case 2:
                printf("You selected Option 2.\n");
                // Add your code for Option 2 here
                break;
            case 3:
                printf("You selected Option 3.\n");
                // Add your code for Option 3 here
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        
        printf("\n");
        
    } while (choice != 4);
    
    return 0;
}
