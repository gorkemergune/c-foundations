#include <stdio.h>

/*
n = 5

      5
     45
    345 
   2345
  12345

*/

int main() {
    int n;
    printf("Enter the number of rows: "); scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // print numbers
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}