#include <stdio.h>



int add(int a, int b) {
    while (b != 0) {
        int carry = a & b; // Calculate carry
        a = a ^ b;         // Sum without carry
        b = carry << 1;    // Shift carry to the left
    }
    return a;
}

int check_odd(int n) {
    return n & 1; // Check the least significant bit
}

int check_power_of_two(int n) {
    return n > 0 && (n & (n - 1)) == 0; // Check if n is a power of two
}

int check_bit(int n, int k) {
    return (n >> k) & 1; // Check the k-th bit
}

double multiply_by_power_of_two(double x, int n) {
    return x * (1 << n); // Multiply by 2^n
}

int halve(int n) {
    return n >> 1; // Divide by 2
}

int main() {
    int a = 5, b = 3;
    printf("Sum of %d and %d is %d\n", a, b, add(a, b));
    
    int n = 7;
    printf("%d is odd: %s\n", n, check_odd(n) ? "Yes" : "No");
    
    n = 16;
    printf("%d is a power of two: %s\n", n, check_power_of_two(n) ? "Yes" : "No");
    
    n = 5; int k = 1;
    printf("The %d-th bit of %d is: %d\n", k, n, check_bit(n, k));
    
    double x = 3.5; int m = 2;
    printf("%f multiplied by 2^%d is %f\n", x, m, multiply_by_power_of_two(x, m));
    
    n = 10;
    printf("Half of %d is %d\n", n, halve(n));
    
    return 0;
}