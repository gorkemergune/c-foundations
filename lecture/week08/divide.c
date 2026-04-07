#include <stdio.h>
#define SIZE 16

int* max_of_array_p(int *first, int *last) {
    int *max = first;
    for (int *p = first + 1; p < last; p++)
        if (*p > *max) max = p;
    return max;
}




int main() {
    int n = 4, A[SIZE] = {4, 590, 4, 4, 590, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; ;
    int *Max_p[SIZE / 4] = {0};

    int *first = A, *last = A + SIZE / 4;

    for (int i = 0; i < 4; i++) {
        Max_p[i] = max_of_array_p(first, last);
        first += SIZE / 4;
        last += SIZE / 4;
    }   

    printf("max of 3rd part: %d\n", *Max_p[2]);



    return 0;
}