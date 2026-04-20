#include <stdio.h>

void weird(char *dest, const char *src) {
    while ((*dest++ = *src++)); // direk k karakter kopyalaması yapar, src'nin sonundaki null karakteri de dahil eder
}


void reverse_copy(char *dest, const char *src) {
    const char *end = src;
    while (*end) end++;   // sona git
    while (end != src)
        *dest++ = *--end;

    *dest = '\0';
}

int main() {

    char str1[] = "Hello, World!";
    char str2[20];

    weird(str2, str1);

    printf("%s\n", str2); // Output: Hello, World!

    char str3[] = "Hello, World!";
    char str4[20];

    reverse_copy(str4, str3);
    printf("%s\n", str4); // Output: !dlroW ,olleH

    return 0;
}