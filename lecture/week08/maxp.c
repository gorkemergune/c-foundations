#include <stdio.h>
#define SIZE 6


int* min_of_array_p(int *first, int size) {
    int *p, *maxp, *last;

    maxp = first;

    for (p = first + 1, last = first + size; p < last; p++) {
        if (*p > *maxp) {
            maxp = p;
        }
    }

    return maxp;

}



int main() {
    int a, A[SIZE] = {-5000, 50, 4, 8, -5876, 57};
    int min, min_1st_half, min_2nd_half;





    return 0;
}