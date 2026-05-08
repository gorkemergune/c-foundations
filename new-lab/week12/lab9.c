/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* ---------------- Question 1 ---------------- */

int fibo_basic_r(int n) {
    if (n == 0 || n == 1)
        return 1;

    return fibo_basic_r(n - 2) + fibo_basic_r(n - 1);
}

int power_basic_r(int base, int exp) {
    if (exp == 0)
        return 1;

    return base * power_basic_r(base, exp - 1);
}

int multiply_basic_r(int a, int b) {
    if (a == 0)
        return 0;

    return b + multiply_basic_r(a - 1, b);
}

void example1_recursive_sequence_values() {
    printf("fibo(7): %d\n", fibo_basic_r(7));
    printf("2^5: %d\n", power_basic_r(2, 5));
    printf("7 * 3: %d\n\n", multiply_basic_r(7, 3));
}

/* ---------------- Question 2 ---------------- */

int sum_digits_basic_r(int n) {
    if (n < 10)
        return n;

    return (n % 10) + sum_digits_basic_r(n / 10);
}

int count_digits_basic_r(int n) {
    if (n < 10)
        return 1;

    return 1 + count_digits_basic_r(n / 10);
}

int reverse_number_basic_r(int n, int result) {
    if (n == 0)
        return result;

    return reverse_number_basic_r(n / 10, result * 10 + n % 10);
}

void example2_recursive_number_conversion() {
    int n = 3057;

    printf("number: %d\n", n);
    printf("digit sum: %d\n", sum_digits_basic_r(n));
    printf("digit count: %d\n", count_digits_basic_r(n));
    printf("reversed: %d\n\n", reverse_number_basic_r(n, 0));
}

/* ---------------- Question 3 ---------------- */

int search_basic_r(int A[], int size, int n) {
    if (size == 0)
        return 0;

    if (A[0] == n)
        return 1;

    return search_basic_r(A + 1, size - 1, n);
}

int index_of_first_basic_r(int A[], int size, int n) {
    int result;

    if (size == 0)
        return -1;

    if (A[0] == n)
        return 0;

    result = index_of_first_basic_r(A + 1, size - 1, n);

    if (result == -1)
        return -1;

    return result + 1;
}

int count_in_array_basic_r(int A[], int size, int n) {
    if (size == 0)
        return 0;

    if (A[0] == n)
        return 1 + count_in_array_basic_r(A + 1, size - 1, n);

    return count_in_array_basic_r(A + 1, size - 1, n);
}

void example3_recursive_array_search() {
    int A[6] = {5, 1, 5, 3, 5, 8};

    printf("5 in A? %d\n", search_basic_r(A, 6, 5));
    printf("7 in A? %d\n", search_basic_r(A, 6, 7));
    printf("first index of 5: %d\n", index_of_first_basic_r(A, 6, 5));
    printf("first index of 8: %d\n", index_of_first_basic_r(A, 6, 8));
    printf("count of 5: %d\n\n", count_in_array_basic_r(A, 6, 5));
}

/* ---------------- Question 4 ---------------- */

int min_p_r(int *first, int *last) {
    int min_rest;

    if (last - first == 1)
        return *first;

    min_rest = min_p_r(first + 1, last);

    if (*first < min_rest)
        return *first;

    return min_rest;
}

int array_sum_p_r(int *first, int *last) {
    if (first == last)
        return 0;

    return *first + array_sum_p_r(first + 1, last);
}

void array_copy_p_r(int *dest, int *first, int *last) {
    if (first == last)
        return;

    *dest = *first;

    array_copy_p_r(dest + 1, first + 1, last);
}

void example4_recursive_pointer_range() {
    int A[5] = {9, -4, 6, 2, -1};
    int B[5];
    int i;

    array_copy_p_r(B, A, A + 5);

    printf("min: %d\n", min_p_r(A, A + 5));
    printf("sum: %d\n", array_sum_p_r(A, A + 5));

    printf("B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }

    printf("\n\n");
}

/* ---------------- Question 5 ---------------- */

void print_string_basic_r(char *p) {
    if (*p == '\0')
        return;

    printf("%c", *p);
    print_string_basic_r(p + 1);
}

void print_string_reverse_basic_r(char *p) {
    if (*p == '\0')
        return;

    print_string_reverse_basic_r(p + 1);
    printf("%c", *p);
}

int str_len_basic_r(char *p) {
    if (*p == '\0')
        return 0;

    return 1 + str_len_basic_r(p + 1);
}

void example5_recursive_string_printer() {
    char s[20] = "pointer";

    printf("normal: ");
    print_string_basic_r(s);

    printf("\nreverse: ");
    print_string_reverse_basic_r(s);

    printf("\nlength: %d\n\n", str_len_basic_r(s));
}

/* ---------------- Question 6 ---------------- */

int multiply_r(int a, int b) {
    if (a == 0)
        return 0;

    return b + multiply_r(a - 1, b);
}

void example6_broken_multiply_r() {
    printf("6 * 4 = %d\n", multiply_r(6, 4));
    printf("0 * 9 = %d\n\n", multiply_r(0, 9));
}

/* ---------------- Question 7 ---------------- */

int int_division_r(int a, int b) {
    if (a < b)
        return 0;

    return 1 + int_division_r(a - b, b);
}

void example7_broken_int_division_r() {
    printf("29 / 5 = %d\n", int_division_r(29, 5));
    printf("20 / 5 = %d\n", int_division_r(20, 5));
    printf("3 / 5 = %d\n\n", int_division_r(3, 5));
}

/* ---------------- Question 8 ---------------- */

int array_max_r(int A[], int size) {
    int max_of_rest;

    if (size == 1)
        return A[0];

    max_of_rest = array_max_r(A + 1, size - 1);

    if (A[0] > max_of_rest)
        return A[0];

    return max_of_rest;
}

void example8_broken_array_max_r() {
    int A[5] = {20, -2, 5, 3, 4};

    printf("max: %d\n\n", array_max_r(A, 5));
}

/* ---------------- Question 9 ---------------- */

int count_in_array_r(int A[], int size, int n) {
    if (size == 0)
        return 0;

    if (A[0] == n)
        return 1 + count_in_array_r(A + 1, size - 1, n);

    return count_in_array_r(A + 1, size - 1, n);
}

void example9_broken_count_in_array_r() {
    int A[6] = {5, 1, 5, 3, 5, 8};

    printf("count of 5: %d\n", count_in_array_r(A, 6, 5));
    printf("count of 7: %d\n\n", count_in_array_r(A, 6, 7));
}

/* ---------------- Question 10 ---------------- */

void print_string_reverse_r(char *p) {
    if (*p) {
        print_string_reverse_r(p + 1);
        printf("%c", *p);
    }
}

void example10_broken_print_string_reverse_r() {
    print_string_reverse_r("pointer");
    printf("\n");
}

/* ---------------- Main ---------------- */

int main(void) {
    example1_recursive_sequence_values();
    example2_recursive_number_conversion();
    example3_recursive_array_search();
    example4_recursive_pointer_range();
    example5_recursive_string_printer();
    example6_broken_multiply_r();
    example7_broken_int_division_r();
    example8_broken_array_max_r();
    example9_broken_count_in_array_r();
    example10_broken_print_string_reverse_r();

    return 0;
}

