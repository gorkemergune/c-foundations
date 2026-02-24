#include <stdio.h>
#include <math.h>


int main() {
    double a = 3, b = 4, c;
    int alpha = 90;
    c = a * a + b * b - 2 * a * b * cos(alpha * M_PI / 180);
    printf("c = %lf\n", sqrt(c));
}
