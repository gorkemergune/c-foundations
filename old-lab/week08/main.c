#include <stdio.h>

void en_dec(char *arr) {
    int counter = 0;
    while (*arr) {
        while 

    }
}




void welcome() {
    int choice;
    while (1) {
        printf("Welcome to Labwork 08!\n");
        printf("1. Encode and Decode\n");
        printf("2. Concatenate\n");
        printf("3. Count Words\n");
        printf("4. Exit\n");
        printf("Make your choice: ");
        scanf("%d", &choice);
    
        if (choice == 1) {
            // Call encode and decode function
        } else if (choice == 2) {
            // Call concatenate function
        } else if (choice == 3) {
            // Call count words function
        } else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {

    welcome();

    return 0;
}