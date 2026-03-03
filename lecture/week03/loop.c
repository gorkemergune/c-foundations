#include <stdio.h>

void print_numbers_ascending(int a, int b) {
    int i;
    i = a;
    
    while (i <= b) {
        printf("%d ", i);
        i = i + 1; // i++
    }
}

void print_numbers_descending(int a, int b) {
    int i;
    i = b;
    
    while (i >= a) {
        printf("%d ", i);
        i = i - 1; // i--
    }
}

void sum_numbers(int a, int b) {
    int sum = 0;
    int i;
    
    for (i = a; i <= b; i++) {
        sum = sum + i;
    }
    
    printf("Sum: %d\n", sum);
}

int main() {

    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a <= b) {
        print_numbers_ascending(a, b);
    } else {
        print_numbers_descending(a, b);
    }
    printf("\n");
    sum_numbers(a, b);

    
    
    return 0;
}