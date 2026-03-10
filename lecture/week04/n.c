#include <stdio.h>

// Kullanıcıdan aldığı yüksekliğe göre N harfi çizdiren program 
// h: 5
//
//  *               *
//  *   *           *
//  *       *       *
//  *          *    * 
//  *               *
//


int main() {
    int h;
    printf("Enter h: "); scanf("%d", &h);

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < h; j++) {
            if(j == 0 || j == h-1 || i == j) printf("*");
            else printf(" ");
        }
        printf("\n");
    }



    return 0;
}