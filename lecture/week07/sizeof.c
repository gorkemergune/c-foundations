#include <stdio.h>


int main() {

    int *p;

    printf("sizeof(int) = %lu\n", sizeof(int)); // 4
    printf("sizeof(p) = %lu\n", sizeof p); // 8
    printf("sizeof(*p) = %lu\n", sizeof *p); // 4




    return 0;
}