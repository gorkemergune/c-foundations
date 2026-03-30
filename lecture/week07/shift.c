#include <stdio.h>


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void shift_left(int A[], int size) {
    for (int i = 0; i < size - 1; i++) {
        A[i] = A[i + 1];
    }
}


void shift_n_left(int A[], int size, int n) {
    for (int i = 0; i < n; i++) {
        shift_left(A, size);
    }

}




int main() {

    int A[10] = {54, 50, 50, 8, 5, 40, 90, 20, 10, 30};

    printf("Original array: ");
    print_array(A, 10);

    shift_n_left(A, 10, 3);
    printf("Array after shifting left 3 times: ");

    print_array(A, 10);

    

    return 0;
}