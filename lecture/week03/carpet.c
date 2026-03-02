#include <stdio.h>


// write a func which checks whether a rectangular carpet fits a rectangular room
// assume that the longer dimension is received first for both ( carpet and room )

int fits_or_not_v0(int r_d1, int r_d2, int c_d1, int c_d2) {
    if (c_d1 <= r_d1 && c_d2 <= r_d2) {
        return 1; // fits
    } else {
        return 0; // does not fit
    }
}

int fits_or_not_v1(int r_d1, int r_d2, int c_d1, int c_d2) {
    return (c_d1 <= r_d1 && c_d2 <= r_d2);
}



int main() {

    int r_d1, r_d2, c_d1, c_d2;
    printf("Enter the dimension for the room: ");
    scanf("%d %d", &r_d1, &r_d2);
    printf("Enter the dimension for the carpet: ");
    scanf("%d %d", &c_d1, &c_d2);

    if (fits_or_not_v0(r_d1, r_d2, c_d1, c_d2)) {
        printf("The carpet fits the room.\n");
    } else {
        printf("The carpet does not fit the room.\n");
    }



    return 0;
}