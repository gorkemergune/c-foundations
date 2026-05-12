#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    bubble_sort(arr, n - 1);
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    swap(&arr[start], &arr[end]);
    reverse_array(arr, start + 1, end - 1);
}

void print_reverse(int arr[], int n) {
    reverse_array(arr, 0, n - 1);
    print_array(arr, n);
}

void fibonacci(int n) {
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        printf("0 ");
        return;
    }
    if (n == 2) {
        printf("0 1 ");
        return;
    }

    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

void string_length(char *str, int *length) {
    if (*str == '\0') {
        return;
    }
    (*length)++;
    string_length(str + 1, length);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    print_array(arr, n);

    bubble_sort(arr, n);
    printf("Sorted array: \n");
    print_array(arr, n);

    printf("Reversed array: \n");
    print_reverse(arr, n);

    printf("Fibonacci sequence up to 10 terms: \n");
    fibonacci(10);

    char str[] = "Hello, World!";
    int length = 0;
    string_length(str, &length);
    printf("Length of the string '%s' is: %d\n", str, length);

    return 0;
}