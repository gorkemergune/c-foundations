#include <stdio.h>

void welcome() {
    printf("Welcome to the Patten Drawing Machine! By using this machine you cand do:\n"
            "1. Draw Rectangle\n"
            "2. Draw Square\n"
            "3. Draw triangle\n"
            "4. Diamond Pattern\n"
            "5. Exit\n"
            "Make your choice: ");
}

void draw_rectangle(int height, int width) {
    int i, j;
    printf("Please input the height and width of the rectangle: ");
    scanf("%d %d", &height, &width);
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("*");
        }
    printf("\n");
    }
}


void draw_square(int edge_length) {
    int k, m;
    m = k;
    printf("Please input the edge length of the square: ");
    scanf("%d", &edge_length);
    for (k = 0; k < edge_length; k++) {
        for (m = 0; m < edge_length; m++) {
            printf("*");
        }
    printf("\n");
    }
}

void draw_triangle(int base) {
    int b;
    printf("Please input the base length of the triangle: ");
    scanf("%d", &b);
    if (b % 2 == 0) {
        printf("The base must be an odd number!\n");
        return;
    }
    int rows = (b + 1) / 2;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

void diamond_pattern(int base) {
    int d;
    printf("Please input the base length of the diamond: ");
    scanf("%d", &d);
    if (d % 2 == 0) {
        printf("The base must be an odd number!\n");
        return;
    }
    int rows = (d + 1) / 2;

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

int main() {
    int choice;
    welcome();
    scanf("%d", &choice);

    if (choice == 1) {
        int height, width;
        draw_rectangle(height, width);
    }
    else if (choice == 2) {
        int edge_length;
        draw_square(edge_length);
    }
    else if (choice == 3) {
        int base;
        draw_triangle(base);
    }
    else if (choice == 4) {
        int base;
        diamond_pattern(base);
    }
    else if (choice == 5) {
        printf("Exiting the program. Goodbye!\n");
    }
    else {
        printf("Invalid choice! Please try again.\n");
        welcome();
        scanf("%d", &choice);
    }
    
    //
    return 0;
}