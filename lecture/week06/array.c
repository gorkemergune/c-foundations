#include <stdio.h>


void print_int_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {

    int A[5] = {5, 10, -5};
    int B[] = {5, 10, -5, 4};
    int C[5] = {0};  // initialize all elements to 0

    printf("Number of elements in A: %lu\n", sizeof(A) / sizeof(int));
    printf("Number of elements in B: %lu\n", sizeof(B) / sizeof(int));  // lu = unsigned long , we used it because sizeof returns a value of type size_t which is an unsigned integer type

    print_int_array(A, 5);
    print_int_array(B, sizeof(B) / sizeof(int));
    print_int_array(C, 5); 

    return 0;
}