#include <stdio.h>

// ======================
// Function 1: Sum of first n numbers
// ======================
int sum_first_n_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// ======================
// Function 2: Print number square
// ======================
void print_number_square(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// ======================
// Function 3: Print number sequence
// ======================
void print_number_sequence(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// ======================
// Function 4: Print multiples of five
// ======================
void print_multiples_of_five(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

// ======================
// Function 5: Print reverse numbers
// ======================
void print_reverse_numbers(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// ======================
// Function 6: Print rainfall pattern
// ======================
void print_rainfall_pattern(int days) {
    for (int i = 1; i <= days; i++) {
        printf("Day %d: ", i);
        for (int j = days; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
}

// ======================
// Function 7: Print water intake table
// ======================
void print_water_intake_table(int glasses) {
    float liters_per_glass = 0.25;
    for (int i = 1; i <= glasses; i++) {
        printf("%d glass%s = %.2f liters\n", 
               i, (i > 1) ? "es" : "", i * liters_per_glass);
    }
}

// ======================
// Function 8: Print hollow square
// ======================
void print_hollow_square(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// ======================
// Function 9: Print cinema seat pattern
// ======================
void print_cinema_seat_pattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        printf("[A][B][C][D][E]\n");
    }
}

// ======================
// Function 10: Print bus schedule
// ======================
void print_bus_schedule(int stops) {
    for (int i = 1; i <= stops; i++) {
        printf("Stop %d: %d minutes\n", i, i * 5);
    }
}

// ======================
// MAIN FUNCTION
// ======================
int main() {
    int n;

    // Function 1
    printf("\nEnter n for sum_first_n_numbers: ");
    scanf("%d", &n);
    printf("Sum of first %d numbers = %d\n", n, sum_first_n_numbers(n));

    // Function 2
    printf("\nEnter n for print_number_square: ");
    scanf("%d", &n);
    print_number_square(n);

    // Function 3
    printf("\nEnter n for print_number_sequence: ");
    scanf("%d", &n);
    print_number_sequence(n);

    // Function 4
    printf("\nEnter n for print_multiples_of_five: ");
    scanf("%d", &n);
    print_multiples_of_five(n);

    // Function 5
    printf("\nEnter n for print_reverse_numbers: ");
    scanf("%d", &n);
    print_reverse_numbers(n);

    // Function 6
    printf("\nEnter number of days for rainfall pattern: ");
    scanf("%d", &n);
    print_rainfall_pattern(n);

    // Function 7
    printf("\nEnter number of glasses for water intake table: ");
    scanf("%d", &n);
    print_water_intake_table(n);

    // Function 8
    printf("\nEnter size for hollow square: ");
    scanf("%d", &n);
    print_hollow_square(n);

    // Function 9
    printf("\nEnter number of rows for cinema seat pattern: ");
    scanf("%d", &n);
    print_cinema_seat_pattern(n);

    // Function 10
    printf("\nEnter number of stops for bus schedule: ");
    scanf("%d", &n);
    print_bus_schedule(n);

    printf("\n=== END OF LABWORK 4 ===\n");
    return 0;
}
