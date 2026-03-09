#include <stdio.h>



void foo(int n) {
    int i = 0;
    while (i <= n) {
        printf("\t%d\n", i);
        i++;
    }
}

int main() {

    int i = 1, n;
    printf("Enter n: "); scanf("%d", &n);
    while (i <= n) {
        printf("%d\n", i);
        foo(i);
        printf("\n");
        i++;
    }

    return 0;
}