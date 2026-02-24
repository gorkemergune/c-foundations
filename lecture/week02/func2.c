#include <stdio.h>

int max_of_two(int a, int b) {
    if (a > b) return a;
    return b;
}

int max_of_three(int a, int b, int c) {
    return max_of_two(max_of_two(a, b), c);
}

int max_of_four(int a, int b, int c, int d) {
    return max_of_two(max_of_three(a, b, c), d);
}

int max_of_four_v2(int a, int b, int c, int d) {
    return max_of_two(max_of_two(a, b), max_of_two(c, d));
}



int main() {
    int a = 10, b = 5, c = 20, d = 35;
    int max;
    max = max_of_three(a, b, c);
    printf("The maximum of %d, %d, and %d is %d\n", a, b, c, max);

    max = max_of_four(a, b, c, d);
    printf("The maximum of %d, %d, %d, and %d is %d\n", a, b, c, d, max);
    
    return 0;
}