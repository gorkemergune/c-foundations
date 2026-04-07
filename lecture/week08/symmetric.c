#include <stdio.h>
#define SIZE 6


int is_symmetric(int *first, int *last) {
    int *left, *right;
    for (left = first, right = last -1; left < right; left++, right--)
        if (*left != *right) return 0;
    return 1;
}



void reverse_copy(int *dest, const int *src, int *last) {
    while (src < last) *dest++ = *--last;
}

void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}   




int main() {
    int n = 4, A[SIZE] = {4, 590, 4, 4, 590, 5};
    int B[SIZE] = {0};
    if (is_symmetric(A, A + n)) printf("Symmetric\n");
    else printf("Not symmetric\n");

    reverse_copy(B, A, A + SIZE);
    print_array(B, SIZE);


    return 0;
}