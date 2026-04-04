#include <stdio.h>
#include <math.h>
#define PI 3.14

void calculate_and_print(float A[], int size) {
    float radian;
    printf("Results: \n");
    for (int i = 0; i < size; i++) {
        if (A[i] > 0 && A[i] < 120) {
            radian = A[i] * (PI / 180);
            printf("The angle of %.2f 's sine: %.2f and cosine: %.2f\n", A[i], sin(radian), cos(radian));
        } 
    }
}


int main() {

    float A[50];
    printf("Enter 50 angles: \n");
    for (int i = 0; i < 5; i++) {
        printf("Enter %d angel: ", i + 1); scanf("%f", &A[i]);
    }

    calculate_and_print(A, 5);

    return 0;
}