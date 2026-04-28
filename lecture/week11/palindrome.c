#include <stdio.h>


int is_palindrome(const char *str) {
    const char *p = str, *q = str;
    while (*q) {
        q++;
    }
    q--;
    while (p < q) {
        if (*p != *q) {
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}



int main() {
    
    char str1[100] = "abcba";
    char str2[100] = "abcde";

    printf("Is '%s' a palindrome? %s\n", str1, is_palindrome(str1) ? "Yes" : "No");
    printf("Is '%s' a palindrome? %s\n", str2, is_palindrome(str2) ? "Yes" : "No");





    return 0;
}