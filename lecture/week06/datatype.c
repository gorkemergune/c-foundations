#include <stdio.h>
#define SIZE 800



double foo(double[], int size);

int main() {

    double ss[8];
    printf("sizeof(x) = %lu\n", sizeof(ss)); // 64 bytes because each double is 8 bytes and there are 8 of them

    int a, b, c;
    double x[SIZE];
    double sum = foo(x, SIZE);
    printf("sum = %ld\n", sizeof(x));


    return 0;
}

double foo(double m[], int size) {
    m[0] = 10.0;
    return m[0] + m[size - 1];
}