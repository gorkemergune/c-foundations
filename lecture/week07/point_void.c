#include <stdio.h>

int main(void) {

    int i = 10;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);
    
    // (void *) kullanıyoruz çünkü %p format specifier'ı void pointer'ları bekler. &i ifadesi i'nin adresini verir, ancak bu adresin türü int* olduğu için, printf fonksiyonuna uygun şekilde göstermek için (void *) ile tür dönüşümü yapıyoruz.

    
    return 0;
}