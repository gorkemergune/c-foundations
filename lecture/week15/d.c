#include <stdio.h>

void f(char *dest, const char *src) {
    
    int src_len = 0;
    while (*src) {
        src_len++;
        src++;
    }
    printf("%d\n", src_len);
}


int main() {

    char src[] = "WELCOME";
    char dest[100];
    f(dest, src);
}