// int is_palindrome(*first,*last) fonksiyonunu yaz. Elinde 100 kelimelik her kelimeden sonra 1 adet boşluk olan bir string var.
// Bu stringin içindeki palindrome olan kelimeleri bul.
// int palindrome_count(*str,spaces[]) kullanarak string'in içindeki boşluk karakterlerinin indexlerini tutan 
// spaces[] array'ini kullanarak palindrome olan kelimeleri say.


#include <stdio.h>

int is_palindrome(char *first, char *last) {
    while (first < last) {
        if (*first != *last)
            return 0;
        first++;
        last--;
    }
    return 1;
}


int palindrome_count(char *str, int spaces[], int space_count) {
    int count = 0;
    for (int i = 0; i < space_count; i++) {
        int first, last;
        if (i == 0)
            first = 0;
        else
            first = spaces[i - 1] + 1;
        last = spaces[i] - 1;
        if (is_palindrome(&str[first], &str[last]))
            count++;
    }

    return count;
}


int main() {


char text[] =
"level radar civic madam refer noon stats kayak rotator racecar "
"deified repaper solos tenet wow mom dad peep pop minim rotor sagas "
"reviver redder malayalam detartrated redivider rotavator tattarrattat "
"aibohphobia anna eve hannah bob otto aba aka amma level radar "
"This sentence contains exactly one hundred words and mixes special "
"palindrome terms with regular words to demonstrate how a long string "
"can be structured across multiple lines in C without losing clarity "
"or readability while still keeping everything logically consistent "
"and easy to understand for developers who want practical examples "
"for learning and testing purposes in their own projects today";


// POİNTER'SIZ HALİ TÜM ARRAYİ GEZİP KONTROL EDİYORUZ
int first = 0;
for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] == ' ' || text[i + 1] == '\0') {
        int last = (text[i] == ' ') ? i - 1 : i;

        // palindrome kontrol
        int left = first;
        int right = last;
        int isPal = 1;

        while (left < right) {
            if (text[left] != text[right]) {
                isPal = 0;
                break;
            }
            left++;
            right--;
        }

        if (isPal) {
            for (int j = first; j <= last; j++)
                printf("%c", text[j]);
            printf("\n");
        }
        first = i + 1;
    }
}

printf("\n\n");


// POİNTER'LI HALİ, KELİMENİN İLK VE SON HARFİNİN ADRESİNDEN GİDİYORUZ
char *ptr = text;
char *start = text;
while (*ptr != '\0') {

    if (*ptr == ' ') {
        char *end = ptr - 1;

        if (is_palindrome(start, end)) {
            for (char *p = start; p <= end; p++)
                printf("%c", *p);
            printf("\n");
        }
        start = ptr + 1; // yeni kelime başlangıcı
    }
    ptr++;
}

printf("\n\n");
int spaces[100];

printf("Total Palindromes: %d\n", palindrome_count(text, spaces, 50));


    return 0;
}


