#include <stdio.h>
#define SIZE 6



void min_of_array(int *first, int *last, int *result) {
    int *p = first;
    *result = *p;
    p++;
    while (p < last) {
        if (*p < *result) {
            *result = *p;
        } p++;  
    }
}


void min_of_array_v2(int *first, int *last, int *result) {
    int *p = last - 1;
    *result = *p;
    p--;
    while (p >= first) {
        if (*p < *result) {
            *result = *p;
        } p--;
    }
}




int main() {
    int a, A[SIZE] = {-5000, 50, 4, 8, -5876, 57};
    int min, min_1st_half, min_2nd_half;
    int *last = A + SIZE;


    min_of_array(A, last, &min);
    printf("min = %d\n", min);
    min_of_array_v2(A, last, &min);
    printf("min = %d\n", min);
    min_of_array(A, A + SIZE / 2, &min_1st_half);
    min_of_array(A + SIZE / 2, last, &min_2nd_half);
    printf("min of 1st half = %d\n", min_1st_half);
    printf("min of 2nd half = %d\n", min_2nd_half);
    

}
