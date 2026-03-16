#include <stdio.h>

/* n = 5 için
    5
   444
  33333
 2222222
111111111
*/


int main() {
    int n = 5, spaces, nums = 1;

    for (spaces = n-1; n; printf("\n"), spaces--, nums+=2, n--) {
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        for (int i = 0; i < nums; i++) {
            printf("%d", n);
        }
    }
}