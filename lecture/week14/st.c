#include <stdio.h>

typedef struct {

    char make[20];
    char model[20];
    int year;
    double price;

} car;


void print_car(car c) {
    printf("Make: %s\n", c.make);
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);
    printf("Price: %.2f\n", c.price);
}

int main() {
    
    int x;
    car y = {
        "Toyota", 
        "Camry", 
        2020, 
        24000.00
        };

    print_car(y);
    

    return 0;
}


