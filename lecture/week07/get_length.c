#include <stdio.h>



void foo(int x[12]) {
    printf("Total bytes: %lu\n", sizeof(x)); // 8
    printf("Size of each element: %lu\n", sizeof(x[0])); // 4
    printf("Number of elements: %lu\n", sizeof(x) / sizeof(x[0])); // 2
}




int main() {

    int x[12];

    printf("Total bytes: %lu\n", sizeof(x)); // 48
    printf("Size of each element: %lu\n", sizeof(x[0])); // 4
    printf("Number of elements: %lu\n", sizeof(x) / sizeof(x[0])); // 12

    foo(x);

    // fonksiyona array gönderirken, array'in kendisi değil, 
    // array'e işaret eden bir pointer gönderilir. 
    // Bu nedenle, fonksiyon içinde sizeof(x) ifadesi, 
    // pointer'ın boyutunu verir (genellikle 8 byte), array'in boyutunu değil.
    /// Bu da fonksiyon içinde array'in uzunluğunu doğru şekilde hesaplamayı engeller.

    return 0;
}