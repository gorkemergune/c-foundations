// Integer Array'i veriliyor, ilk elemanına k deniyor. Bu k array içinde tekrar tekrarlandığı nokta ile aralarında kalan
// elemanların aynı olup olmadığını kontrol eden bir fonksiyon yazınız. 
// Örneğin: 5, 4, 3, 5, 4, 3, 2, 1, 7 de k 5 olur ardından diğer 5 e kadar 4,3 var. Diğer 5'ten sonra da var. return 1
// ama liste 5, 4, 3, 5, 4, 2, 1 olsaydı return 0.


#include <stdio.h>

// 2. k'nın yeri index 3
// aradaki indexler = 1, 2 
// sonrasının indexler = 4, 5

int find_k(int arr[]){

    int i = 1;
    int k = arr[0];
    while (k != arr[i]) {
        i++; 
    } // 2. k'nın indexi bulundu
    int c = i;
    int j = 0; 
    while (j != c) {
        if (arr[j] == arr[i]) {
            i++;
            j++;
        } else {
            return 0;
        } 
    } return 1;
}

int main() {

    int myArr[] = {5, 4, 3, 5, 4, 2, 1, 7};
    printf("%d\n", find_k(myArr));

    return 0;
}