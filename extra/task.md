# C Final — Çalışma Taski

**Konu dağılımı:** Pointer · String · Array · Recursion · Bitwise
**Zorluk:** Verilen örnek dosyadaki seviye (pointer aritmetiği, in-place işlemler, recursive contract'lar)

### Genel kurallar
- İmzalar (function signature) **aynen** kullanılacak.
- Aksi belirtilmedikçe `<string.h>` / `<stdlib.h>` yardımcı fonksiyonları (strlen, strcpy, memcpy...) **yasak** — kendin yazacaksın.
- Her fonksiyonu `main` içinde verilen örnekle test et.
- "Recursive" yazan sorularda **döngü (for/while) yasak**.
- "In-place" yazan sorularda **ikinci bir dizi/buffer açmak yasak**.

---

## Soru 1 — [Pointer]
**İmza:** `int *find_max_ptr(int *arr, int size)`
**Görev:** Dizideki en büyük elemanın **adresini** (pointer) döndür. Değeri değil, pointer'ı.
**Örnek:** `{3, 7, 2, 9, 4}` → `9`'un bulunduğu adres (`*sonuc == 9`, index 3).
**Kural:** Index (`arr[i]`) yerine pointer aritmetiği (`*(arr + i)`) kullanmaya çalış.

---

## Soru 2 — [String / Pointer]
**İmza:** `int count_char(const char *s, char target)`
**Görev:** `target` karakterinin string içinde kaç kez geçtiğini say.
**Örnek:** `count_char("banana", 'a')` → `3`
**Kural:** Sadece pointer ile gez (`while (*s) ... s++`). Index kullanma, `strlen` çağırma.

---

## Soru 3 — [String]
**İmza:** `void reverse_in_place(char *s)`
**Görev:** String'i **yerinde** ters çevir (iki pointer / iki index ile baştan ve sondan ortaya doğru swap).
**Örnek:** `"WELCOME"` → `"EMOCLEW"`
**Kural:** İkinci bir dizi açma. Tek temp `char` kullanabilirsin.

---

## Soru 4 — [Array]
**İmza:** `void move_zeros(int *arr, int size)`
**Görev:** Tüm `0`'ları dizinin **sonuna** taşı; `0` olmayanların **sırasını koru** (stable).
**Örnek:** `{0, 1, 0, 3, 12}` → `{1, 3, 12, 0, 0}`
**Kural:** In-place yap (ekstra dizi yok). İpucu: bir "write index" tut.

---

## Soru 5 — [Recursion / String]
**İmza:** `int is_palindrome_rec(const char *s, int left, int right)`
**Görev:** String palindrom mu? Recursive kontrol et. `1` (evet) / `0` (hayır) döndür.
**Çağrı şekli:** `is_palindrome_rec(s, 0, len - 1)`
**Örnek:** `"level"` → `1`, `"hello"` → `0`
**Kural:** Döngü yasak. `left >= right` taban durumu.

---

## Soru 6 — [Recursion]
**İmza:** `int gcd(int a, int b)`
**Görev:** İki sayının en büyük ortak bölenini (EBOB) **recursive** Öklid algoritmasıyla bul.
**Örnek:** `gcd(48, 18)` → `6`
**Kural:** Döngü yasak. İpucu: `gcd(a, b) = gcd(b, a % b)`, taban durumu `b == 0`.

---

## Soru 7 — [Recursion / Array]
**İmza:** `int max_rec(const int *arr, int size)`
**Görev:** Dizideki en büyük elemanı **recursive** olarak bul (değeri döndür).
**Örnek:** `{4, 9, 2, 7}` → `9`
**Kural:** Döngü yasak. İpucu: `arr[0]` ile kalanın max'ini karşılaştır.

---

## Soru 8 — [Bitwise]
**İmza:** `int count_set_bits(unsigned int n)`
**Görev:** Sayının ikilik gösteriminde kaç tane `1` biti olduğunu say.
**Örnek:** `count_set_bits(13)` → `3` (13 = `1101`)
**Kural:** Sadece bitwise operatörler (`&`, `>>`, ...). İpucu: `n & 1` ve `n >>= 1`.

---

## Soru 9 — [Bitwise]
**İmza:** `int is_power_of_two(unsigned int n)`
**Görev:** `n` ikinin kuvveti mi? `1` / `0` döndür.
**Örnek:** `16` → `1`, `18` → `0`, `0` → `0`
**Kural:** Döngü yok, **tek bir bitwise ifadesiyle** çöz. İpucu: ikinin kuvveti olan sayıda tek `1` biti vardır → `n & (n - 1)`.

---

## Soru 10 — [Bitwise / Pointer]
**İmza:** `void xor_swap(int *a, int *b)`
**Görev:** İki sayıyı **temp değişken kullanmadan**, XOR ile takas et.
**Örnek:** `a = 5, b = 9` → çağrı sonrası `a = 9, b = 5`
**Kural:** Geçici değişken yok. Sadece `*a` ve `*b` üzerinde `^` işlemleri.

---

## ⭐ Bonus (Challenge) — [Pointer / String]
**İmza:** `void reverse_words(char *s)`
**Görev:** Bir cümledeki **kelimelerin sırasını** yerinde ters çevir (kelimelerin kendi harfleri aynı kalsın).
**Örnek:** `"Hello guys we are"` → `"are we guys Hello"`
**Kural:** Verilen dosyadaki `find_nth_first` / `reverse_in_place` mantığını birleştir. İpucu: önce tüm string'i ters çevir, sonra her kelimeyi tek tek tekrar ters çevir.

---

### Bitir & kontrol et
Hepsini tek bir `main` içinde aşağıdaki gibi çağırıp çıktıları doğrula:

```c
int main(void) {
    int arr[] = {3, 7, 2, 9, 4};
    printf("Q1: %d\n", *find_max_ptr(arr, 5));
    printf("Q2: %d\n", count_char("banana", 'a'));    // 3

    char s[] = "WELCOME";
    reverse_in_place(s);
    printf("Q3: %s\n", s);                            // EMOCLEW

    // ... diğer sorular
    return 0;
}
```