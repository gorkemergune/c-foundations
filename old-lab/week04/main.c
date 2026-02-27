#include <stdio.h>

int sum_first_n_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}


void print_number_square(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", i);
    }
    printf("\n");
    }
}


void print_number_sequence(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        printf(" ");
    }
    printf("\n");
}


void print_multiples_of_three(int n) {
    for (int i = 1; i <= n/3; i++) {
        printf("%d", 3 * i);
        printf(" ");
    }
    printf("\n");
}


void print_reverse_numbers(int n) {
    for (int i = n; i > 0; i--) {
        printf("%d", i);
        printf(" ");
    }
    printf("\n");
}


void print_temperature_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        printf("Day %d: ", i);
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void print_fuel_consumption_table(int n) {
    printf("For 'liters = %d'\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d liter = %d km \n", i, 15 * i);
    }
}


void print_hollow_square(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


void print_bus_seat_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        printf("[A][B] [C][D]\n");
    }
}


void print_bus_schedule(int n) {
    for (int i = 1; i <= n; i++) {
        printf("Stop %d: %d minutes  ", i, 5 * i);
    }
}



int main() {
    int n;


    printf("\nEnter n for sum_first_n_numbers: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sum_first_n_numbers(n));


    printf("\nEnter n for print_number_square: ");
    scanf("%d", &n);
    print_number_square(n);

    printf("\nEnter n for print_number_sequence: ");
    scanf("%d", &n);
    print_number_sequence(n);

    printf("\nEnter n for print_multiples_of_three: ");
    scanf("%d", &n);
    print_multiples_of_three(n);

    printf("\nEnter n for print_reverse_numbers: ");
    scanf("%d", &n);
    print_reverse_numbers(n);

    printf("\nEnter n for print_temperature_pattern: ");
    scanf("%d", &n);
    print_temperature_pattern(n);

    printf("\nEnter n for print_fuel_consumption_table: ");
    scanf("%d", &n);
    print_fuel_consumption_table(n);

    printf("\nEnter n for print_hollow_square: ");
    scanf("%d", &n);
    print_hollow_square(n);

    printf("\nEnter n for print_bus_seat_pattern: ");
    scanf("%d", &n);
    print_bus_seat_pattern(n);

    printf("\nEnter n for print_bus_schedule: ");
    scanf("%d", &n);
    print_bus_schedule(n);

    return 0;
}

