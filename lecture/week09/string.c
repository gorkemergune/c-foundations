#include <stdio.h>
#include <string.h>



int main() {


    char *s = "Hello, World!";
    char l = s[0];
    char m = 'o';
    char ll = s[5];
    char lll = s[6];
    char llll = s[13];

    printf("%c\n", l); // H
    printf("%s\n", s); // Hello, World!
    printf("%c\n", m); // o
    printf("%c\n", ll); // ,
    printf("%c\n", lll); // (space)
    printf("%c\n", llll); // \0 (null terminator)

    char mySentence[] = "Hello, World!";
    printf("%s\n", mySentence); // Hello, World!
    for (int i = 0; i < 13; i++) {
        printf("%c ", mySentence[i]);
    } printf("\n"); // H e l l o ,   W o r l d !

    int i = 0;
    char *MyName = "ayarlicazhocam";
    while (1) {
        if (MyName[i] == '\0') {
            printf("%d", i);
            break;
        } else {
            printf("%c ", MyName[i]);
            i++;
        } // a y a r l i c a z h o c a m
    } printf("\n");

    printf("%zu\n", sizeof(MyName)); // 8 (pointer size) // Biz bunu pointer ile tanımladık max 8 oluyor.
    printf("%zu\n", strlen(MyName)); // 14 (length of the string)
    printf("%zu\n", sizeof(mySentence)); // 14 (array size including null terminator) // Biz bunu array ile tanımladık içindeki karakter sayısı kadar yer kaplıyor.
    printf("%zu\n", strlen(mySentence)); // 13 (length of the string without null terminator) // strlen fonksiyonu null terminator'ı saymaz sadece karakterleri sayar.


    return 0;
}