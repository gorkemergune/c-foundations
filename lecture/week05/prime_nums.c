#include <stdio.h>

// find prime numbers in [1,1000]


int is_prime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // n is divisible by a number other than 1 and itself
    }
    return 1; // n is prime
}


int main() {

    for (int count = 0, n = 2; n < 1000; n++) {
        if (is_prime(n)) {
            printf("%d ", n);
            count++;
            if (count % 10 == 0) printf("\n"); // print 10 primes per line
        }
    } printf("\n");



    return 0;
}