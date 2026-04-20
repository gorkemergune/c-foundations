// foo fonksiyonu yaz int a ve int b alıcak, a < b olcak her zaman.
// a'dan b'ye olan sayıları aralarında space olacak şekilde yazdıracak. Örneğin a=3 ve b=7 ise 3 4 5 6 7 yazacak.
// goo fonksiyonu yaz, n kez foo fonksiyonunu çağıracak. her döngüne alt satıra geçicek.
// main'de tanımlı 100 indexli A, B, C arrayleri var. Belli bir i veriliyor ardından tanımladığımız fonksiyonlar çağıralarak işlemler yapılıyor.
// Örneğin i = 5, C[5] = 2, A[5] = 10, B[5] = 12 ise goo(A[5], B[5], C[5]) çağırılacak ve 2 kez 10 11 12 yazacak.

#include <stdio.h>

void foo(int a, int b) {
    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
}

void goo(int a, int b, int n) {
    for (int i = 0; i < n; i++) {
        foo(a, b);
        printf("\n");
    }
}

int main () {
    int A[100], B[100], C[100];
    
    // Örnek değerler atayalım
    A[5] = 10;
    B[5] = 12;
    C[5] = 2;

    int i = 5; // Verilen i değeri
    goo(A[i], B[i], C[i]);

    return 0;
}