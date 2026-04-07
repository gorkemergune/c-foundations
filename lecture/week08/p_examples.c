#include <stdio.h>
#define SIZE 6


int count_n_in_array_v0(int *first, int *last, int n) {
    int *p, count = 0;
    for (p = last - 1; p >= first; p--) {
        if (*p == n) count++;
    
    } return count;
}



int *first_occurence(int *first, int *last, int n) {
    int *p;
    while (p < last) {
        if (*p == n) return p;
        p++;
    } return 0;
}


int *last_occurence(int *first, int *last, int n) {
    int *p = last - 1;
    while (p <= first) {
        if (*p == n) return p;
        p++;
    } return 0;
}




int count_n_int_array_v1(int *first, int *last, int n) {
    int count = 0, *first_n;
    first_n = first_occurence(first, last, n);
    while (first_n != 0) {
        count++;
        first_n = first_occurence(first_n + 1, last, n);
    } return count;
}



int count_n_int_array_v2(int *first, int *last, int n) {
    int count = 0, *last_n;
    last_n = last_occurence(first, last, n);
    while (last_n != 0) {
        count++;
        last_n = last_occurence(first, last_n, n);
    } return count;
}




int main() {

    int n = 4, A[SIZE] = {5000, 590, 4, 8, -5876, 4};
    printf("the # of %d's in A is %d\n", n, count_n_in_array_v0(A, A + SIZE, n));
    printf("the # of %d's in 2nd half of A: %d\n", n, count_n_in_array_v0(A + SIZE / 2, A + SIZE, n));
    printf("the # of %d's in A is %d\n", n, count_n_int_array_v1(A, A + SIZE, n));
    printf("the # of %d's in A is %d\n", n, count_n_int_array_v2(A, A + SIZE, n));


    return 0;
}