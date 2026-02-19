#include <stdio.h>

int main() {
    double ogrenciNum = 25235.3099;
    double ondalik = ogrenciNum - (int)ogrenciNum;
    int sayi = (int)(ondalik * 10000);   
    int t = 0;
    int basamak;
    while (sayi > 0) {
        basamak = sayi % 10;     // Son basamağı al (Örn: 9)
        t += basamak;            // Toplama ekle
        sayi = sayi / 10;        // Son basamağı sayıdan at
    }
    printf("\nt = %d olarak hesaplandı.\n", t);

    int y = 0;
    double sonuc;
    int x = 1;
    printf("----------------------------------\n");
    while (x) {
        // Formül: (x^2 - 0.2*y^3 - 3*t) / 8
        // math.h kullanmadan: x*x ve y*y*y şeklinde yazıyoruz
        sonuc = ((x * x) - (0.2 * y * y * y) - (3 * t)) / 8.0;
        printf("x = %d icin -> (%d - 0 - %d)/8 = %.3f\n", x, x * x, 3 * t, sonuc);
        // Sonuç üst sınırı (0.3) geçtiği anda duruyoruz
        if (sonuc > 0.3) {
            printf("\nx = %d olduğunda sonuç %.3f olmuş. Aralığın dışına taştık.\n", x, sonuc);
            printf("Bu nedenle x = %d alınacaktır.\n", x - 1);
            break;
        }
        x++;
    }
    printf("----------------------------------\n");
    x = x - 1;
    y = y + 1;
    while (y) {
        sonuc = ((x * x) - (0.2 * y * y * y) - (3 * t)) / 8.0;
        printf("y = %d icin -> (64 - %f - %d)/8 = %.3f\n", y, 0.2 * y * y * y, 3 * t, sonuc);
        if (sonuc < 0.05 ) {
            printf("\ny = %d olduğunda sonuç %.3f olmuş. Aralığın dışına taştık.\n", y, sonuc);
            printf("Bu nedenle y = %d alınacaktır.\n", y - 1);
            break;
        }
        y++;
    }
    y = y-1;
    printf("Sonuç: x = %d, y = %d olduğunda denklem aralığa en yakınya da eşitsizliği sağlayansonucu vermektedir.\n", x, y);
    return 0;
}