#include <stdio.h>


int multiply(int a, int b) {
    if(a == 1) return b;

    return b + multiply(a - 1, b);
}

int factorial(int n) {
    if(n == 0) return 1;

    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}


int multip_v2(int a, int b, int result) {
    if(a == 0) return result;

    return multip_v2(a - 1, b, result + b);
}


int divide(int a, int b) {
    if(a < b) return 0;

    return 1 + divide(a - b, b);
}

int power(int a, int b) {
    if(b == 0) return 1;

    return a * power(a, b - 1);

}

void right_to_left(int n) {  // n sayısın döndürcez örnek: 459 --> 954
    if (n < 10) {
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    right_to_left(n / 10);
}

void left_to_right(int n) {  // n sayısın döndürcez örnek: 459 --> 954
    if (n < 10) {
        printf("%d", n);
        return;
    }
    left_to_right(n / 10);
    printf("%d", n % 10);
}


int tower_of_hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return 1;
    }
    int moves = 0;
    moves += tower_of_hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    moves += 1;
    moves += tower_of_hanoi(n - 1, aux, to, from);
    return moves;
} // 2 iken 3 , 3 iken 7 , 4 iken 15 , 5 iken 31 hareket yapar. Kısaca 2^n - 1 hareket yapar.


int array_max(int A[], int size) { 
    if(size == 1) return A[0];

    int max_rest = array_max(A + 1, size - 1);
    return (A[0] > max_rest) ? A[0] : max_rest;
}


int array_max_v2(int A[], int size) { 
    if(size == 1) return A[0];

    int max_rest = array_max_v2(A, size - 1);
    return (A[size - 1] > max_rest) ? A[size - 1] : max_rest;
}

int array_max_v3(int A[], int size) { 
    if(size == 1) return A[0];

    int max_rest = array_max_v3(A, size - 1);
    return (A[size - 1] > max_rest) ? A[size - 1] : max_rest;
}

int main() {

    printf("multiply(3, 4) = %d\n", multiply(3, 4));
    printf("factorial(5) = %d\n", factorial(5));
    printf("fibonacci(10) = %d\n", fibonacci(10));
    printf("multip_v2(3, 4, 0) = %d\n", multip_v2(3, 4, 0));
    

    right_to_left(459);

    printf("\n");
    printf("left_to_right(459) = ");
    left_to_right(459);
    printf("\n");

    printf("divide(10, 3) = %d\n", divide(10, 3));
    printf("power(2, 10) = %d\n", power(2, 10));
    printf("tower_of_hanoi(5, 'A', 'C', 'B') = %d\n", tower_of_hanoi(5, 'A', 'C', 'B'));

    return 0;
}