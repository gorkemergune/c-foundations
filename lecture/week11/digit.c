#include <stdio.h>


int is_digit(char c) {
    return c >= '0' && c <= '9';
}


int value(char c) {
    if (is_digit(c)) {
        return c - '0';
    } else {
        return -1; // Not a digit
    }
}


int to_integer(char *str) {
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_digit(str[i])) {
            result = result * 10 + value(str[i]);
        } else {
            return -1; // Invalid character
        }
    }
    return result;
}


int to_integer_v1(char *str) {
    int result;
    if (*str == '-') {
        result = -to_integer(str + 1);
    } else {
        result = to_integer(str);
    }
}


int main() {
    char c1 = '0';
    char c2 = 'a';
    char c3 = '5';

    printf("%c is digit? %d\n", c1, is_digit(c1));
    printf("%c is digit? %d\n", c2, is_digit(c2));
    printf("%c is digit? %d\n", c3, is_digit(c3));
    printf("\n");

    printf("Value of %c: %d\n", c1, value(c1));
    printf("Value of %c: %d\n", c2, value(c2));
    printf("Value of %c: %d\n", c3, value(c3));
    printf("\n");

    char str1[] = "12345";
    char str2[] = "12a45";

    printf("Integer value of %s: %d\n", str1, to_integer(str1));
    printf("Integer value of %s: %d\n", str2, to_integer(str2));
    printf("\n");

    return 0;
}