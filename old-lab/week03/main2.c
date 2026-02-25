#include <stdio.h>

void welcome() {
    printf("Welcome to the Pattern Drawing Machine! By using this machine you can do:!\n"
            "1. Draw Palindrome Shapes\n"
            "2. Check Palindrome Shape (6 input)\n"
            "3. Draw a point on XY plane\n"
            "4. Display Pascal Triangle\n"
            "5. Exit\n"
            "Make your choice: ");
}

void draw_palindrome() {
    int b;
    printf("Enter the base: ");
    scanf("%d", &b);
    if (b % 2 == 0) {
        printf("The base must be an odd number!\n");
        return;
    }

    // b = 7 iken index dağılımları: @+@*@+@
    // 0 - 2 - 4 - 6 bunlar @
    // 1 5 bunlar +
    // 3 bu *
    //
    // b = 9 iken index dağılımları: @+@+*+@+@
    // 0 - 2 - 6 - 8 bunlar @
    // 1 3 5 7 bunlar +
    // 4 bu *
    // 
    // (b+1) / 2 = hem satır sayısı hem de *'ın indexini verir
    // çift indexler @ verir, tek indexler + verir

    int i, j;
    for (i = 1; i <= (b + 1) / 2; i++) {
        for (j = 1; j <= (b + 1) / 2 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("@");
            } else {
                printf("+");
            }
        }
        for (j = i - 1; j >= 1; j--) {
            if (j % 2 == 1) {
                printf("@");
            } else {
                printf("+");
            }
        }
        printf("\n");
    }

}    

void check_palindrome() {
    char a, b, c, d, e, f;
    printf("Enter the shape (6 input): ");
    scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f); // %c 'den önce boşluk olucak!
    if (a == f && b == e && c == d) {
        printf("İt is a palindrome shape!\n");
    } else {
        printf("It is not a palindrome shape!\n");
        return;
    }
}

void draw_point() {
    int x, y;
    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);
    int i, j;
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            if (i == y && j == x) {
                printf("* ");
            } else {
                printf("_ ");
            }
        }
        printf("\n");
    }

}

void pascal_triangle() {
    int base;
    printf("Enter the base: ");
    scanf("%d", &base);
    if (base % 2 == 1) {
        printf("It cannot be drawn since the base is odd!\n");
        return;
    }

    int i, j, k;
    for (i = 0; i < base; i++) {
        for (j = 0; j < base - 1 - i; j++) {
            printf(" ");
        }
        for (k = 0; k <= i; k++) {
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

int main() {
    int choice;
    welcome();
    scanf("%d", &choice);
    if (choice == 1) {
        draw_palindrome();
    } else if (choice == 2) {
        check_palindrome();
    } else if (choice == 3) {
        draw_point();
    } else if (choice == 4) {
        pascal_triangle();
    } else if (choice == 5) {
        printf("Exiting the program. Goodbye!\n");
    } else {
        printf("Invalid choice! Please try again.\n");
        welcome();
        scanf("%d", &choice);
    }



    return 0;
}