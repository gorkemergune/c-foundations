#include <stdio.h>

/* n = 5

12345
 2345
  345
   45
    5

*/

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // print space
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // print number
        for (int j = i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}