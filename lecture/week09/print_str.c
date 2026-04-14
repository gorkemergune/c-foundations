#include <stdio.h>


void str_cat(char dest[], const char src[]) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    printf("str_cat: \"%s\"  ", dest);
}


void str_cpy_rev_p(char *dest, char *src) {
    char *p = src;
    while (*p != '\0') {
        p++;
    } 
    p--; // null karakteri atla
    while (p >= src) {
        *dest = *p;
        dest++;
        p--;
    } 
    printf("str_cpy_rev_p: \"%s\"  ", dest);
}



int main() {
    char str1[100] = "abcxabc";
    char str2[100] = "abc";
    char str3[100] = "xyz";

    printf("str1: \"%s\" str2: \"%s\" str3: \"%s\"  ",str1, str2, str3);

    str_cat(str1, str2);

    str_cpy_rev_p(str3, str1);
    // yazdırmıyor çünkü: 

    return 0;
}