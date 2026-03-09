#include <stdio.h>


int main() {

    int n, i, j;
    printf("Enter n: "); scanf("%d", &n);
    i = 1;
    while (i <= n) {
        j = i;

        while (j >= 0) {
            printf("\t%d\n", j);
            j--;
        }
        printf("\n");
        i++;
    }



    return 0;
}