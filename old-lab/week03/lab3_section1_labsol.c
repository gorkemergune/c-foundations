#include <stdio.h>

void draw_palindrome() {
    int base;

    // Ask until base is valid
    while (1) {
        printf("Enter the base: ");
        scanf("%d", &base);

        if (base < 3 || base % 2 == 0) {
            printf("Error: Base must be an odd number greater than or equal to 3.\n");
        } else {
            break;
        }
    }

    int rows = (base + 1) / 2;

    for (int i = 1; i <= rows; i++) {
        // Print spaces for centering
        for (int j = i; j < rows; j++) {
            printf(" ");
        }

        // Print left half pattern
        for (int j = 1; j < i; j++) {
            if (j % 2 == 1)
                printf("@");
            else
                printf("+");
        }

        // Print middle star
        printf("*");

        // Print right half (mirror of left)
        for (int j = i - 1; j >= 1; j--) {
            if (j % 2 == 1)
                printf("@");
            else
                printf("+");
        }

        printf("\n");
    }
}

// Function: check_palindrome (no arrays)
void check_palindrome() {
    char c1, c2, c3, c4, c5, c6;

    while (1) {
        printf("Enter the shape (6 characters): ");
        scanf(" %c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6);

        if (c1 == c6 && c2 == c5 && c3 == c4) {
            printf("It is a palindrome shape!\n");
            break;
        } else {
            printf("It is not a palindrome shape!\n");
        }
    }
}

void draw_point() {
    int x, y;
    int max = 9;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    printf("y\n");

    // Print vertical part (from top y=9 down to 1)
    for (int i = max; i >= 1; i--) {
        printf("|");
        if (i == y) {
            // print spaces until x coordinate, then '*'
            for (int j = 1; j < x; j++)
                printf("  "); // two spaces for proper scaling
            printf(" *");
        }
        printf("\n");
    }

    // Print x-axis
    printf(" ");
    for (int i = 0; i <= max; i++)
        printf("_ ");
    printf("x\n");
}

void pascal_triangle() {
      int base;
      do {
          printf("Enter the base: ");
          scanf("%d", &base);

          if (base % 2 != 0) {
              printf("It cannot be drawn since the base is odd!\n");
          }
      } while (base % 2 != 0);
     for (int i = 0; i < base; i++) {
         for (int j = 0; j < base - 1 - i; j++) {
             printf(" ");
         }
         for (int k = 0; k <= i; k++) {
             if ((i & k) == k) {
                 printf("*"); // Odd number
             } else {
                 printf(" "); // Even number
             }
             if (k < i) {
                 printf(" ");
             }
         }
         printf("\n");
     }
}

void welcome() {
    int choice = 0;

    printf("Welcome to the Pattern Drawing Machine! By using this machine you can do: \n");

    while (choice != 5) {
        printf("1. Draw Palindrome Shape\n");
        printf("2. Check Palindrome Shape (6 input)\n");
        printf("3. Draw a point on XY plane\n");
        printf("4. Display Pascal Triangle\n");
        printf("5. Exit\n");
        printf("Make your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            draw_palindrome();
        }
        else if (choice == 2) {
            check_palindrome();
        }
        else if (choice == 3) {
            draw_point();
        }
        else if (choice == 4) {
            pascal_triangle();
        }
        else if (choice == 5) {
            printf("Goodbye!\n");
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
