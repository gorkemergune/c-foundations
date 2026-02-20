#include <stdio.h>

int main() {
    int sayilar[5] = {12, 4, 19, 7, 15};
    int i;
    int n = 2; // En buyuk 2. terimi bulmak istiyoruz

    int en_buyuk = sayilar[0];
    int ikinci_buyuk = sayilar[0];

    for (i = 1; i < 5; i++) {
        if (sayilar[i] > en_buyuk) {
            ikinci_buyuk = en_buyuk;
            en_buyuk = sayilar[i];
        } else if (sayilar[i] > ikinci_buyuk && sayilar[i] != en_buyuk) {
            ikinci_buyuk = sayilar[i];
        }
    }

    printf("En buyuk %d. terim: %d\n", n, ikinci_buyuk);
    return 0;
}
