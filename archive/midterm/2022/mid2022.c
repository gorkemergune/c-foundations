#include <stdio.h>

int unique(int n) {
    if (9 < n && n < 1000) return 1;
    else return 0;
}


void encode(int A[], int Encoded[]) {
    int i = 0, j = 0, counter = 1;
    while (A[i] != -1) {
        if (A[i] == A[i + 1]) {
            counter++;
        } else {
            Encoded[j] = A[i];
            Encoded[j + 1] = counter;
            j += 2;
            counter = 1;
        }
        i++;
    } for (int k = 0; k < j; k++) {
        printf("%d ", Encoded[k]);
    }printf("-1\n");
}


void decode(int Encoded[], int A[]) {
    int i = 0, j = 0;
    while (Encoded[i] != -1) {
        for (int k = 0; k < Encoded[i + 1]; k++) {
            A[j] = Encoded[i];
            j++;
        }
        i += 2;
    } for (int k = 0; k < j; k++) {
        printf("%d ", A[k]);
    }printf("-1\n");
}

int main() {

    printf("Test for unique(123): %d\n", unique(123));
    printf("Test for unique(8): %d\n", unique(8));

    int k, num1, num2, num3;
    printf("Enter a number (50<= k <= 950): "); scanf("%d", &k);

    for (int i = 1; i <= 25; i++) {
        num1 = k / 100;
        num2 = (k / 10) % 10;
        num3 = k % 10;
        if (num1 != num2 && num1 != num3 && num2 != num3) {
            printf("%d ", k + i);
        }
    } printf("\n");

    encode((int[]){4, 4, 4, 4, 4, 4, 7, 7, 11, 11, 11, 11, -1}, (int[20]){0});

    return 0;
}