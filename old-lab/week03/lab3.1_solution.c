#include <stdio.h>

void draw_rectangle() {
    int height, width;

    printf("Enter height and width: ");
    scanf("%d %d", &height, &width);

    if (height == width) {
        printf("This is a square, not a rectangle! Please try again.\n");
        return;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void draw_square() {
    int edge_length;

    printf("Enter the edge length: ");
    scanf("%d", &edge_length);

    for (int i = 0; i < edge_length; i++) {
        for (int j = 0; j < edge_length; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void draw_triangle() {
    int base;

    // Keep asking until base is valid (odd and >= 3)
    while (1) {
        printf("Enter the base: ");
        scanf("%d", &base);

        if (base < 3 || base % 2 == 0) {
            printf("The base must be an odd number!\n");
        } else {
            break; // valid base
        }
    }

    int rows = (base + 1) / 2;

    for (int i = 1; i <= rows; i++) {
        // spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

void diamond() {
    int base;

    while (1) {
        printf("Enter the base: ");
        scanf("%d", &base);

        if (base < 3 || base % 2 == 0) {
            printf("The base must be an odd number!\n");
        } else {
            break;
        }
    }

    int rows = (base + 1) / 2;

    // Top half (including middle line)
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

void welcome() {
    int choice = 0;

    printf("Welcome to the Pattern Drawing Machine! By using this machine you can do: \n");

    while (choice != 5) {
        printf("1. Draw Rectangle\n");
        printf("2. Draw Square\n");
        printf("3. Draw Triangle\n");
        printf("4. Diamond Pattern\n");
        printf("5. Exit\n");
        printf("Make your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            draw_rectangle();
        }
        else if (choice == 2) {
            draw_square();
        }
        else if (choice == 3) {
            draw_triangle();
        }
        else if (choice == 4) {
            diamond();
        }
        else if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }

        printf("\n"); // Add spacing between actions
    }
}

int main() {
  welcome();
  return 0;
}
