// Yazılan sayının asal çarpanlarını sadece birer defa toplayan bir fonksiyon yazınız. 
// Örneğin 12 sayısının asal çarpanları 2 ve 3'tür, bu yüzden fonksiyonunuz 5 döndürmelidir. 
// 28 sayısının asal çarpanları 2 ve 7'dir, bu yüzden fonksiyonunuz 9 döndürmelidir.


#include <stdio.h>


int total_factor(int n) {
    int sum = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    return sum;
}


int main() {

    int n = 12;
    int m = 28;

    printf("12'nin asal çarpanlarının toplamı: %d\n", total_factor(n));
    printf("28'in asal çarpanlarının toplamı: %d\n", total_factor(m));



    return 0;
}