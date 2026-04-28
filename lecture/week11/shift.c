#include <stdio.h>


void to_string(int n, char dest[]) {
    int sign = 0;
    if (!n) {  // n == 0
        dest[0] = '0';
        dest[1] = '\0';
        return;
    }
    else {
        if (n < 0) {
            sign = 1;
            n = -n;
        }
    }

}


int main() {

    char str1[50] = "";
    char str2[50] = "Hello World!";
    int n = 4506;
    printf("str1: %s\n", str1);

}