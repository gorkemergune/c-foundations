#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

void print_triangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


int main() {
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    result = multiply(a, b);
    printf("The product of %d and %d is: %d\n", a, b, result);

    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    print_triangle(height);


    return 0;
}