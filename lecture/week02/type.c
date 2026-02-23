#include <stdio.h>

int main() {
    int m, n;
    double p, x, y;

    m = 3; n = 2;
    p = 2.0;

    x = m / p;
    y = m / n;

    printf("x = %f\n", x); // 1.500000
    printf("y = %f\n", y); // 1.00ß0000

    x = 3.46;
    y = 3.96;
    int x_round = (int)(x + 0.5);
    int y_round = (int)(y + 0.5);
    printf("x_round = %d\n", x_round); // 3
    printf("y_round = %d\n", y_round); // 4


    return 0;
}