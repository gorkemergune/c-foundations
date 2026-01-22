#include <stdio.h>

struct Car{
    char brand[50];
    int year;
};

void updateYear(struct Car *c) {
    c->year = 2022; // Updating the year using pointer
}

union myUnion {
    int Value;
    float fValue;
    char strValue;
    char myString[20];
};

int main() {
    struct Car car = {"Toyota", 2020};
    struct Car car2 = {"Honda", 2018};
    updateYear(&car2); // Passing address of car2 to updateYear function

    struct Car *ptr = &car; // Pointer to the struct

    printf("Brand: %s\n", ptr->brand); // Accessing struct members using pointer
    printf("Year: %d\n", ptr->year); // ptr -> year is equivalent to (*ptr).year

    printf("Updated Brand: %s\n", car2.brand);
    printf("Updated Year: %d\n", car2.year);
    
    union myUnion u1;
    u1.Value = 42;
    printf("Union Value as int: %d\n", u1.Value);
    u1.fValue = 3.14;
    printf("Union Value as float: %.2f\n", u1.fValue);
    u1.strValue = 'H';
    printf("Union Value as char: %c\n", u1.strValue);
    printf("Size of union: %zu bytes\n", sizeof(u1));
    /* The purpose of using a union is to save memory. It allows different data types to share the same memory space when they are used alternatively.
    This optimizes the program's memory usage. 
    The difference with a struct is that in a struct, separate memory space is allocated for each member, while in a union, all members share the same memory space. */


    return 0;

}