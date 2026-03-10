#include <stdio.h>

// Kullanıcıdan aldığı yüksekliğe göre sayılardan oluşan dağ çizdiren program
// h = 5
//
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
//

void print_peak(int h){
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for(int i = h-1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }



}


int main() {

    int h;
    printf("Enter h: "); scanf("%d", &h);
    print_peak(h);


    return 0;
}