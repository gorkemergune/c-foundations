#include <stdio.h>


int my_strlen(char *s) {

    int count = 0;

    while (s[count] != '\0') {
        count++;
    }
    return count;
}


int main() {

    char *s = "Hello, World!";
    printf("%d\n", my_strlen(s)); // 13

    return 0;
}