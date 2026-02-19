#include <stdio.h>

struct Owner {  // Nested structure
    char firstName[50];
    char lastName[50];
};

struct Car {  // Main structure
    char brand[50];
    int year;
    struct Owner owner; // Nested structure member
};

int main() {
    struct Owner person = {"John", "Doe"};
    struct Car myCar = {"Toyota", 2020, person};

    printf("Car Brand: %s\n", myCar.brand); // Accessing structure members
    printf("Car Year: %d\n", myCar.year); // Accessing structure members
    printf("Owner: %s %s\n", myCar.owner.firstName, myCar.owner.lastName); // Accessing nested structure members

    return 0;
}

