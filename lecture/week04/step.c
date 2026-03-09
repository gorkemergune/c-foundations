#include <stdio.h>


int main() {
    int lines, first = 2, line_count = 0, n, number_count;
    printf("Enter n: "); scanf("%d", &lines);

    while(line_count < lines) {
        n = first;
        number_count = 0;

        int diff_inner, diff_outer = 1;
        diff_inner = 1;
        
        while(number_count < first) {
            printf( "%d ", n);
            n += diff_inner;
            diff_inner++;
            number_count++;
        }
        printf("\n");
        line_count++;
        first += diff_outer;
        diff_outer++;
    }

    return 0;
}