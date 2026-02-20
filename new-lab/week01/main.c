#include <stdio.h>
#include <string.h>

/*
 * CSE 114 - Baslangic Duzeyi Hazirlik Egzersizleri (Ornek Cozumler)
 *
 * Merhaba arkadaslar,
 * Bu dosya tamamen baslangic seviyesi icin hazirlandi.
 * Kodlar bilerek kisa tutuldu, yorumlar ise mantigi adim adim anlatacak
 * sekilde uzun yazildi. Ama hedefimiz tek sey:
 * "Calisan en sade ornekleri gorup, mantigi oturtmak."
 *
 * Veri tipi nedir?
 * - Veri tipi, bir degiskenin "ne tur bilgi" tutacagini belirler.
 * - int    : Tam sayi tutar. Ornek: 5, -2, 100
 * - float  : Ondalikli sayi tutar (daha az hassas). Ornek: 3.14
 * - double : Ondalikli sayi tutar (float'a gore daha hassas)
 * - char   : Tek bir karakter tutar. Ornek: 'A'
 * - char[] : Metin tutar. Ornek: "Merhaba"
 *
 * Fonksiyon nedir?
 * - Fonksiyon, belirli bir isi yapan kod blogudur.
 * - Ayni isi tekrar tekrar yazmak yerine bir kere fonksiyon yazariz,
 *   sonra istedigimiz kadar cagiririz.
 * - Bu hem kodu kisaltir hem de okumayi kolaylastirir.
 * - Ornek: selamla("Ayse"), selamla("Mehmet")
 *
 * Kosul nedir? (if / else)
 * - Programin "karar vermesini" saglar.
 * - Belirli bir durum dogruysa bir kod calisir, degilse baska kod calisir.
 * - Ornek:
 *   - not >= 50 ise "Gecti"
 *   - degilse "Kaldi"
 * - Karsilastirma operatorleri:
 *   == (esit mi), != (esit degil mi), >, <, >=, <=
 *
 * Dongu nedir?
 * - Dongu, ayni islemi birden fazla kez otomatik yapmamizi saglar.
 * - for dongusu: "Kac kez donecegi belliyse" cok kullanilir.
 * - while dongusu: "Kosul dogru oldugu surece" calisir.
 * - Ornek: 1'den 10'a kadar sayi yazdirmak icin 10 satir printf yazmak
 *   yerine dongu ile tek bir yapi kullaniriz.
 *
 * Kisa ama cok onemli ek notlar:
 * - C dilinde satir sonlarinda; (noktali virgul) kullanilir.
 * - Buyuk-kucuk harf fark eder: "not" ile "Not" farkli degiskendir.
 * - Dizilerde indeks 0'dan baslar. Ornek: dizi[0] ilk elemandir.
 * - scanf ile kullanicidan veri alabilirsiniz; burada ilk okumayi
 *   kolaylastirmak icin bazi yerlerde sabit deger kullandik.
 */

/* Soru 1: Ekrana "Merhaba, CSE 114!" yazdir. */
void soru1(void) {
    /* printf ekrana yazi yazdirmak icin kullanilir. \n bir alt satira gecer. */
    printf("1) Selam, CSE 114!\n"); 
}

/* Soru 2: ad ve yas degiskenleriyle kendini tanit. */
void soru2(void) {
    /*
     * Burada iki farkli veri tipi goruyorsunuz:
     * 1) char ad[] = "Ali";
     *    - Bu bir metin (string) tutar.
     *    - C'de metinler char dizisi olarak tutulur.
     *
     * 2) int yas = 19;
     *    - Bu bir tam sayi tutar.
     *
     * printf icinde:
     * - %s -> string yazdirmak icin
     * - %d -> int yazdirmak icin kullanilir.
     */
    char ad[] = "Görkem";
    char soyad[6];
    int yas = 20;
    char bolum[] = "bilgisayar mühendisliği";
    printf("2) Benim adim %s, yasim %d, %s okuyorum. Yaşımın depolandığı yer: %p\n", ad, yas, bolum, &yas);
}

/* Soru 3: Iki sayinin toplamini bul. */
void soru3(void) {
    /*
     * Ornek cozum kisa olsun diye sabit deger kullanildi.
     * Gercek kullanimda scanf ile kullanicidan deger alinabilir.
     */
    int a = 7;
    int b = 5;
    int toplam = a + b;
    printf("3) %d + %d = %d\n", a, b, toplam);
}

/* Soru 4: Sayinin cift mi tek mi oldugunu bul. */
void soru4(void) {
    int sayi = 11;

    /*
     * Mod operatoru (%) kalani verir.
     * sayi % 2 == 0 ise sayi 2'ye tam bolunur, yani cifttir.
     * Aksi halde tektir.
     *
     * if (kosul) { ... } else { ... } yapisini unutmayin:
     * - if blogu: kosul dogruysa calisir
     * - else blogu: kosul yanlissa calisir
     */
    if (sayi % 2 == 0) {
        printf("4) %d cifttir\n", sayi);
    } else {
        printf("4) %d tektir\n", sayi);
    }
}

/* Soru 5: Nota gore gecti/kaldi yazdir. */
void soru5(void) {
    int notu = 72;

    /*
     * Temel kosul:
     * 50 ve ustu => Gecti
     * 50 alti    => Kaldi
     *
     * Burada >= operatoru kullanildi:
     * - notu >= 50 ifadesi "not 50'ye esit veya buyuk mu?" diye sorar.
     */
    printf("5) ");

    if (notu >= 90) {
        printf("Harf notun: AA\n");
    } else if (notu >= 80) {
        printf("Harf notun: BA\n");
    } else if (notu >= 70) {
        printf("Harf notun: BB\n");
    } else if (notu >= 60) {
        printf("Harf notun: CB\n");
    } else {
        printf("Harf notun: FF\n");
    }
}

/* Soru 6: 1'den 10'a kadar sayilari yazdir. */
void soru6(void) {
    int i;
    printf("6) ");

    /*
     * Dongu mantigini adim adim dusunelim:
     * for (i = 1; i <= 10; i++)
     *
     * - i = 1      : Baslangic degeri. Dongu 1'den baslar.
     * - i <= 10    : Kosul. i 10'dan kucuk/esit oldugu surece devam eder.
     * - i++        : Her tur sonunda i degeri 1 artar.
     *
     * Yani bu dongu toplam 10 tur calisir ve 1,2,3,...,10 yazdirir.
     */
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

/* Soru 7: 1'den 100'e kadar toplami bul. */
void soru7(void) {
    int i;
    int toplam = 0;

    /*
     * "Birikimli toplama" cok temel bir tekniktir:
     * - once toplam = 0 yapariz
     * - sonra dongu her adimda yeni sayiyi toplama ekler
     *
     * toplam += i; satiri suyla aynidir:
     * toplam = toplam + i;
     *
     * i 1'den 100'e giderken, toplam degiskeni adim adim buyur
     * ve en sonda 1..100 toplamini verir.
     */
    for (i = 1; i <= 100; i++) {
        toplam += i;
    }
    printf("7) 1..100 toplami = %d\n", toplam);
}

/* Soru 8: selamla(isim) fonksiyonu yaz. */
void selamla(const char isim[]) {
    /*
     * Bu bir fonksiyondur.
     * Fonksiyonlarin amaci: belirli bir isi tek bir yerde toplamak.
     *
     * Burada yaptigimiz is:
     * - disaridan bir isim al
     * - "Merhaba, isim" yazdir
     *
     * Bu sayede ayni yazdirma kodunu tekrar tekrar yazmayiz.
     * Sadece fonksiyonu farkli isimlerle cagiririz.
     */
    printf("8) Merhaba, %s\n", isim);
}

/* Soru 9: Dizideki en buyuk elemani bul. */
void soru9(void) {
    int sayilar[5] = {12, 4, 19, 7, 15};
    int i;

    /*
     * En buyugu bulmada klasik yontem:
     * 1) Ilk elemani en_buyuk kabul et.
     * 2) Digerlerini tek tek gez.
     * 3) Daha buyuk bulursan en_buyuk'u guncelle.
     */
    int en_buyuk = sayilar[0];
    int iki_buyuk = sayilar[0];

    for (i = 1; i < 5; i++) {
        if (sayilar[i] > en_buyuk) {
            iki_buyuk = en_buyuk;
            en_buyuk = sayilar[i];
            if (sayilar[i] > iki_buyuk) {
                iki_buyuk = sayilar[i];
            }
        }
    }

    printf("9) En buyuk eleman = %d\n", en_buyuk);
    printf("9) En buyuk ikinci eleman = %d\n", iki_buyuk);
}

/* Soru 10: Metindeki sesli harf sayisini bul (basit surum). */
void soru10(void) {
    char metin[] = "Merhaba CSE 114";
    int i;
    int sayac = 0;

    /*
     * Baslangic seviyesi icin bu cozum ASCII seslileri sayar:
     * a, e, i, o, u (ve buyuk harfleri)
     *
     * Not: Turkce ozel harfler UTF-8 oldugu icin
     * ileri seviye cozumde locale/wide-char yaklasimi gerekir.
     */
    for (i = 0; i < (int)strlen(metin); i++) {
        char c = metin[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            sayac++;
        }
    }

    printf("10) \"%s\" icindeki sesli sayisi = %d\n", metin, sayac);
}

int main(void) {
    /*
     * Onerilen ogrenme sirasi:
     * 1) Ekrana yazdirma
     * 2) Degiskenler ve islem
     * 3) Kosullar
     * 4) Donguler
     * 5) Fonksiyon
     * 6) Dizi ve metin
     */
    soru1();
    soru2();
    soru3();
    soru4();
    soru5();
    soru6();
    soru7();
    selamla("Ayşe");
    soru9();
    soru10();
    return 0;
}
