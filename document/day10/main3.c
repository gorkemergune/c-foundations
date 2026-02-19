#include <stdio.h>

typedef struct {
    char firstName[50];
    char lastName[50];
} Owner;

struct Car{
    char brand[50];
    int year;
};

typedef struct {
    char brand[50];
    int year;
    Owner owner;
}   Vehicle;
// The logic of typedef: In the definition of data structures like struct or union, instead of using the "struct" or "union" keyword every time.
// It is used to give an alias to that data structure. This improves code readability and makes it easier to write.
typedef struct {
    char brand[50];
    char model[50];
    int year;
}   Automobile;

typedef struct {
    char name[50];
    Vehicle featuredCar;
}   CarShowroom;


int main() {
    struct Car car1 = {"Ford", 2015}; // Using struct
    Vehicle car2 = {"Chevrolet", 2017}; // Using typedef

    printf("Car 1 Brand: %s, Year: %d\n", car1.brand, car1.year);
    printf("Car 2 Brand: %s, Year: %d\n", car2.brand, car2.year);

    Automobile car3 = {"Tesla", "Model S", 2020}; // Using typedef with more members
    printf("Car 3 Brand: %s, Model: %s, Year: %d\n", car3.brand, car3.model, car3.year);

    Owner person = {"John", "Doe"};
    Automobile car4 = {"BMW", "X5", 2019};
    CarShowroom showroom = {"City Motors", car2};

    printf("Showroom Name: %s\n", showroom.name);
    printf("Featured Car Brand: %s, Year: %d, Owner: %s %s\n",
        showroom.featuredCar.brand,
        showroom.featuredCar.year,
        showroom.featuredCar.owner.firstName,
        showroom.featuredCar.owner.lastName);




    return 0;
}
