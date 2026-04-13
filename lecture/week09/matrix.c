#include <stdio.h>

void addNumsMatrix(int matrix[3][3], int num) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] += num;
        }
    }
}


int main() {

    int myMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    addNumsMatrix(myMatrix, 10);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", myMatrix[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}