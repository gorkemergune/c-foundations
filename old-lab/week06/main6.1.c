#include <stdio.h>

int is_symmetric_temperature(int A[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (A[i] != A[size -1 - i]) {
            return 0;
        } 
    } return 1;
}

void rearrange_transactions(int dest[], const int src[], int size) {
    int k = 0;

    for (int i = 0; i < size; i++) {
        if (src[i] < 0) {
            dest[k++] = src[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (src[i] == 0) {
            dest[k++] = src[i];
        }
    }
    
    for (int i = 0; i < size; i++) {
        if (src[i] > 0) {
            dest[k++] = src[i];
        }
    }
}


int main() {

    int arr[] = {20,22,24,26,26,24,22,20};
    int size = 8;
    int result_is_symmetric_temp = is_symmetric_temperature(arr, size);
    printf("%d\n", result_is_symmetric_temp);


    int src[] = {500,-200,0,100,-50,0,300,-100};
    int rearrenge_size = 8;
    int dest[8];

    rearrange_transactions(dest, src, rearrenge_size);

    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }

    

    return 0;
}