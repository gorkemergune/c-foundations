// foo diye fonksiyon yap n kere yan yana aynı karakteri yazdırsın.
// foo fonksiyonunu kullanarak algoritmik şekli yap.
// baştaki sayılar şekle dahil ve . yerine boşluk kullanılcak.
/*
n = 5
0 * * * * * . . . *
1 * . . . * . . . *
2 * . . . * . . . *
3 * . . . * . . . *
4 * . . . * . . . *
5 * * * * * . . . *
6 * . . . * . . . *
7 * . . . * . . . *
8 * . . . * . . . *
9 * . . . * * * * *
*/

#include <stdio.h>

void foo(int n, char ch) {
    for (int i = 0; i < n; i++) {
        printf("%c ", ch);
    }
}

int main() {
    char space = ' ';
    char star = '*';
    int n = 5;

    printf("0 ");
    foo(n, star);
    foo(n - 2, space);
    printf("%c\n", star);

    for (int i = 1; i < n; i++) {
        printf("%d ", i);
        foo(1, star);
        foo(n - 2, space);
        foo(1, star);
        foo(n - 2, space);
        printf("%c\n", star);
    }

    printf("%d ", n);
    foo(n, star);
    foo(n - 2, space);
    printf("%c\n", star);

    for (int i = n + 1; i < 2 * n - 1; i++) {
        printf("%d ", i);
        foo(1, star);
        foo(n - 2, space);
        foo(1, star);
        foo(n - 2, space);
        printf("%c\n", star);
    }

    printf("%d ", 2 * n - 1);
    foo(1, star);
    foo(n - 2, space);
    foo(n, star);
    printf("\n");


    return 0;
}