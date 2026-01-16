#include <stdio.h>

int main() {
    // Şehir koordinatları 
    // 0:A, 1:B, 2:C, 3:D, 4:E
    int x[] = {300, 10, 20, 100, 50};
    int y[] = {200, 10, 30, 150, 20};
    char isim[] = {'A', 'B', 'C', 'D', 'E'};

    int enKisaMesafe = 1000000;
    int yol[6]; // En iyi rotayı tutmak için

    // Tüm permütasyonları dönen döngüler (A sabit, aradakiler değişiyor)
    for (int i = 1; i <= 4; i++) { // 1. durak
        for (int j = 1; j <= 4; j++) { // 2. durak
            if (j == i) continue;
            for (int k = 1; k <= 4; k++) { // 3. durak
                if (k == i || k == j) continue;
                for (int l = 1; l <= 4; l++) { // 4. durak
                    if (l == i || l == j || l == k) continue;

                    // Rotayı oluştur: A -> i -> j -> k -> l -> A
                    int r[] = {0, i, j, k, l, 0};

                    // KISITLAMA: D(3) -> E(4) yan yana gelemez
                    int yasak = 0;
                    for (int m = 0; m < 5; m++) {
                        if (r[m] == 3 && r[m+1] == 4) yasak = 1;
                    }

                    if (!yasak) {
                        int toplamMesafe = 0;
                        for (int m = 0; m < 5; m++) {
                            // Manhattan mesafesi: |x1-x2| + |y1-y2|
                            int dx = x[r[m]] - x[r[m+1]];
                            int dy = y[r[m]] - y[r[m+1]];
                            if (dx < 0) dx = -dx; // Mutlak değer (abs) yerine
                            if (dy < 0) dy = -dy;
                            toplamMesafe += (dx + dy);
                        }

                        if (toplamMesafe < enKisaMesafe) {
                            enKisaMesafe = toplamMesafe;
                            for (int m = 0; m < 6; m++) yol[m] = r[m];
                        }
                    }
                }
            }
        }
    }

    // Sonucu yazdır
    printf("En Kisa Yol: ");
    for (int i = 0; i < 6; i++) {
        printf("%c%s", isim[yol[i]], i < 5 ? " -> " : "");
    }
    printf("\nToplam Mesafe: %d\n", enKisaMesafe);

    return 0;
}