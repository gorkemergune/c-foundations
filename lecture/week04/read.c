#include <stdio.h>

int read_k_integers(int k) {
    int i = 0, sum = 0, n;
    while (i < k) {
        printf("Enter an integer: "); scanf("%d", &n);
        sum += n;
        i++;
    }
    return sum;
}

int main() {
    int k, sum;
    do{
        printf("Enter next k: "); scanf("%d", &k);
        if (k > 0) {
            sum = read_k_integers(k);
            printf("Sum: %d\n", sum);
        }
    } while (k > 0);
        return 0;
}