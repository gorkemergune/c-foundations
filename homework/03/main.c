#include <stdio.h>




int main() {

    int first, second;

    while (1) {
        printf("Enter two positive integers:"); scanf("%d %d", &first, &second);
        if (first < 0 || second < 0) {
            break;
        } else if (first >= second) {
            printf("The first number is larger or equal to the second. Exiting\n");
            break;
        } else {
            for (int i = second; i >= first; i -= 2) {
                printf("%d\n", i);
            }
        } printf("\n");
    }

    return 0;
}