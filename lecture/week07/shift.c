#include <stdio.h>


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void shift_right(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    } arr[0] = last;
    print_array(arr, size);
}



void shift_left(int arr[], int size) {
    int first = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    } arr[size - 1] = first;
    print_array(arr, size);
}




int main() {

    int A[10] = {54, 50, 50, 8, 5, 40, 90, 20, 10, 30};
    int B[10] = {54, 50, 50, 8, 5, 40, 90, 20, 10, 30};

    shift_right(A, 10);
    shift_left(B, 10);
    

    return 0;
}