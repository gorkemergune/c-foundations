#include <stdio.h>

struct Example1 {
  char a; // 1 byte
  int b;  // 4 bytes
  char c; // 1 byte
};

struct Example2 {
  int b;  // 4 bytes
  char a; // 1 byte
  char c; // 1 byte
};

struct S {
    char a;
    int b;
    char c;
};

union U {
    char a;
    int b;
    char c;
};



int main() {
    printf("Size of struct: %zu bytes\n", sizeof(struct Example1)); // 1 + 3 (padding) + 4 + 1 + 3 (padding) = 12 bytes
    printf("Size of struct: %zu bytes\n", sizeof(struct Example2));  // 4 + 1 + 1 + 2 (padding) = 8 bytes

    printf("Struct size: %zu bytes\n", sizeof(struct S)); // 1 + 3 (padding) + 4 + 1 + 3 (padding) = 12 bytes
    printf("Union size: %zu bytes\n", sizeof(union U)); // max(1, 4, 1) = 4 bytes
    return 0;
}