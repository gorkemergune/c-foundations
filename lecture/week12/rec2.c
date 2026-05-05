#include <stdio.h>


void f(int A[], int size, int left, int index) {
    if (!left) {
        if (index == size) {
            f(A, size, 1, 0);
        } else {
            for (int i = 0; i < size; i++) {
                printf("%d ", A[i]);
            }
            printf("\n");
        }
    }
}

int search(int A[], int size, int n) {
    if (size == 0) return 0;
    if (A[0] == n) return 1;

    return search(A + 1, size - 1, n);
}

int count_in_array(int *first, int *last, int n) {
    if (first == last) return 0;
    if (*first == n) return 1 + count_in_array(first + 1, last, n);

    return count_in_array(first + 1, last, n);
}

void array_copy(int *dest, int *first, int *last) {
    if (first == last) return;

    *dest = *first;
    array_copy(dest + 1, first + 1, last);
}



int main() {



    return 0;
}