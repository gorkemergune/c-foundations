#include <stdio.h>

// Kullanıcıdan aldığı yüksekliğe göre sağ üste yatık üçgen çizdiren program
// n: 5
//
//  *   *   *   *   *
//      *   *   *   *
//          *   *   *
//              *   *
//                  *   
//                  


void print_star(int n){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}


int main() {

    int n;
    printf("Enter n: "); scanf("%d", &n);
    print_star(n);

    
    return 0;
}