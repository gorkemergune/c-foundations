#include <stdio.h>


int main() {

    int i;
    int *p; // Ram'de bulunan çöp adres, Dereferencing

    printf("%d %d\n", i, *p);

    p = &i;

    printf("%d %d %p\n", i, *p, p);

    i = 10;
    *p = 20; // Atama yaptıktan sonra ramde bulunan adres

    printf("%d %d %p\n", i, *p, p);







    return 0;
}