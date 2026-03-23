#include <stdio.h>

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int foo_v1(int A[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) A[i] = A[i] * A[i];
    for (i = 0; i < size; i++) sum += A[i]; 
    return sum;
}

int foo_v2(int A[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        A[i] = A[i] * A[i];
        sum += A[i];
    }
    return sum;
} 


int main() {

    int arr[5] = {1, 3, 5, 2, 7};
    print_arr(arr, 5);




    return 0;
}