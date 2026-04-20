// sadece pointerlar ile işlem yap, index kullanılmayacak.
// bize 2 tane hazır fonksiyon veriyor: copy_array, rotate_sub_array
// ilk olarak kendimiz array'deki max değerin adresini döndüren *find_max fonksiyon yapıcaz.
// ikinci olarak yaptığımız *find_max fonksiyonunu ve copy_array'i kullanarak n. en büyük değerin adresini döndüren find_nth_largest fonksiyonunu yapıcaz.
// üçüncü olarak en büyük q ve r değerlerini bulucaz ve adresleri A + q ile A + r iki değer arasını n kez rotate_sub_array fonksiyonunu kullanarak array'i hareket ettiricez.
// sınavın en zor sorusuydu :D

#include <stdio.h>

int* copy_array(int* dest, int* src, int n) {  // src'deki n elemanı dest'e kopyalar ve dest'in son adresini döndürür
    for (int i = 0; i < n; i++) {
        *dest++ = *src++;
    }
    return dest;
}


// p ve q arasındaki elemanları sağa kaydırır, q'daki eleman p'ye gelir
// örneğin : p = 1, q = 4, array = [0, 1, 2, 3, 4, 5] -> array = [0, 4, 1, 2, 3, 5]
void rotate_sub_array(int* arr, int *p, int *q) { 
    int temp = *p;
    *p = *q;
    *q = temp;
}

int* find_max(int* arr, int n) {
    int* max = arr; // ilk elemanı max olarak başlat
    while (n--) { // n eleman boyunca döngü
        if (*arr > *max) { // eğer yeni eleman max'tan büyükse
            max = arr; // max'ı güncelle
        } arr++; // bir sonraki elemana geç
    }
    return max; // max'ın adresini döndür
}

// malloc kullanılmayacak, sadece pointerlar ile işlem yapacağız, index kullanılmayacak
// ben sınavda en büyük eleman yerine -1 atadım çünkü soruda tüm elemanların pozitif olduğunu varsayıyoruz.
int* find_nth_largest(int* arr, int n, int k) {
    int src[n]; // geçici bir array oluştur
    copy_array(src, arr, n); // arr'yi src'ye kopyala
    for (int i = 0; i < k - 1; i++) { // k-1 kere en büyük elemanı bulup 0 yapacağız
        int* max = find_max(src, n); // src'deki en büyük elemanın adresini bul
        *max = -1; // en büyük elemanı -1 yap
    }
    int* nth = find_max(src, n); // k-1 kere en büyük elemanı bulup -1 yaptıktan sonra kalan en büyük eleman k. en büyük elemandır
    int* ptr = arr; // arr'yi baştan başlat
    int* src_ptr = src; // src'yi baştan başlat
    while (n--) {
        if (*src_ptr == *nth) { // src'deki eleman k. en büyük elemana eşitse
            return ptr; // arr'deki aynı indexteki elemanın adresini döndür
        }
        ptr++; // arr'deki bir sonraki elemana geç
        src_ptr++; // src'deki bir sonraki elemana geç
    }
    // bize lazım olan arr'deki adres yoksa soru patlıyor.
    return NULL; // bu satır hiçbir zaman çalışmaz, sadece derleyici uyarısını önlemek için eklenmiştir.
}





int main() { // main fonksiyonunda sadece üçüncü kısım sınavda yapılacak, diğer kısımlar test amaçlıdır.
    int arr[] = {3, 4, 1, 8, 9, 2, 6, 5, 7};
    int n = 9;
    int k = 3;

    int r = 2, q = 5;
    int* nth_largest_q = find_nth_largest(arr, n, r);
    int* nth_largest_r = find_nth_largest(arr, n, q);
    printf("q. en büyük eleman: %d\n", *nth_largest_q);
    printf("r. en büyük eleman: %d\n", *nth_largest_r);

    for (int i = 0; i < k; i++) {
        rotate_sub_array(arr, nth_largest_q, nth_largest_r); // 3, 4, 1, 8, 9, 2, 6, 5, 7 -> 3, 9, 1, 8, 4, 2, 6, 5, 7 -> 3, 4, 1, 8, 9, 2, 6, 5, 7 -> 3, 9, 1, 8, 4, 2, 6, 5, 7
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } printf("\n");
    
    return 0;
}