#include <stdio.h>

// Function 1: Sum of first n numbers
int sum_first_n_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Function 2: Print number square
void print_number_square(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// Function 3: Print number sequence
void print_number_sequence(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function 4: Print multiples of 3
void print_multiples_of_three(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

// Function 5: Print reverse numbers
void print_reverse_numbers(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function 6: Temperature pattern
void print_temperature_pattern(int days) {
    for (int i = 1; i <= days; i++) {
        printf("Day %d: ", i);
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function 7: Fuel consumption table
void print_fuel_consumption_table(int liters) {
    int km_per_liter = 15;
    for (int i = 1; i <= liters; i++) {
        printf("%d liter = %d km\n", i, i * km_per_liter);
    }
}

// Function 8: Hollow square
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

// Function 9: Bus seat pattern
void print_bus_seat_pattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        printf("[A][B]  [C][D]\n");
    }
}

// Function 10: Bus schedule
void print_bus_schedule(int stops) {
    for (int i = 1; i <= stops; i++) {
        printf("Stop %d: %d minutes\n", i, i * 5);
    }
}

// Main function
int main() {
    int n;


    // Function 1
    printf("\nEnter n for sum_first_n_numbers: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sum_first_n_numbers(n));

    // Function 2
    printf("\nEnter n for print_number_square: ");
    scanf("%d", &n);
    print_number_square(n);

    // Function 3
    printf("\nEnter n for print_number_sequence: ");
    scanf("%d", &n);
    print_number_sequence(n);

    // Function 4
    printf("\nEnter n for print_multiples_of_three: ");
    scanf("%d", &n);
    print_multiples_of_three(n);

    // Function 5
    printf("\nEnter n for print_reverse_numbers: ");
    scanf("%d", &n);
    print_reverse_numbers(n);

    // Function 6
    printf("\nEnter number of days for temperature pattern: ");
    scanf("%d", &n);
    print_temperature_pattern(n);

    // Function 7
    printf("\nEnter liters for fuel consumption table: ");
    scanf("%d", &n);
    print_fuel_consumption_table(n);

    // Function 8
    printf("\nEnter size for hollow square: ");
    scanf("%d", &n);
    print_hollow_square(n);

    // Function 9
    printf("\nEnter number of rows for bus seat pattern: ");
    scanf("%d", &n);
    print_bus_seat_pattern(n);

    // Function 10
    printf("\nEnter number of stops for bus schedule: ");
    scanf("%d", &n);
    print_bus_schedule(n);

    printf("\n=== END OF LABWORK 4 ===\n");

    return 0;
}
