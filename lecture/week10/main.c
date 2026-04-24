#include <stdio.h>



int * createPointer() {
    int x = 10;
    int *pX = &x;
    return pX; // This will return a pointer to a local variable, which is undefined behavior
}


int main() {

    int age = 21;
    int *pAge = &age;

    printf("age: %d\n", age); // 21
    printf("pAge: %p\n", pAge); // Adress of age
    printf("*pAge: %d\n", *pAge); // 21
    printf("&age: %p\n", &age); // Adress of age
    printf("&pAge: %p\n", &pAge); // Adress of pAge
    printf("sizeof(age): %lu\n", sizeof(age)); // 4
    printf("sizeof(pAge): %lu\n", sizeof(pAge)); // 8


    createPointer(); // This will cause undefined behavior if we try to use the returned pointer
    printf("After calling createPointer()\n");
    printf("%d", *createPointer()); // This will likely print a garbage value or cause a crash


    return 0;

}