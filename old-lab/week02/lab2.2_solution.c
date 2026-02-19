#include <stdio.h> 

// Task1: Cone Volume and Surface Area Calculator

double calculate_circle_area(double radius) {
    return 3.14159 * radius * radius;
}

double calculate_slant_height(double radius, double height) {
    double slant_height;
    double temp;

    // Approximate square root without math.h (Newton-Raphson method)
    slant_height = (radius * radius) + (height * height);
    temp = slant_height / 2;
    for (int i = 0; i < 10; i++) { // few iterations are enough for small numbers
        temp = 0.5 * (temp + (slant_height / temp));
    }
    return temp;
}

double calculate_cone_volume(double radius, double height) {
    double base_area = calculate_circle_area(radius);
    return (base_area * height) / 3.0;
}

double calculate_cone_surface_area(double radius, double height) {
    double base_area = calculate_circle_area(radius);
    double slant_height = calculate_slant_height(radius, height);
    double lateral_surface_area = 3.14159 * radius * slant_height;
    return base_area + lateral_surface_area;
}

int main() {
    double radius, height; 

    printf("Please enter the radius of the cone (in meters): ");
    scanf("%lf", &radius); 

    printf("Please enter the height of the cone (in meters): ");
    scanf("%lf", &height); 

    double volume = calculate_cone_volume(radius, height);
    double surface_area = calculate_cone_surface_area(radius, height);

    printf("\n--- Calculation Results ---\n");
    printf("Cone Volume: %.2lf cubic meters\n", volume);
    printf("Cone Surface Area: %.2lf square meters\n", surface_area);
    printf("---------------------------\n");

    return 0; 
}

#include <stdio.h>

double getBaseRate(char houseType) {
    double rate;
    if (houseType == 'A' || houseType == 'a') {
        rate = 0.85;
    } else {
        rate = 1.10;
    }
    return rate;
}

double calculateConsumptionCost(double baseRate, double kWh) {
    return baseRate * kWh;
}

double applyAgeAdjustment(int age, double cost) {
    if (age < 18) {
        cost = cost * 0.90; // 10% discount
    } else if (age >= 65) {
        cost = cost * 0.85; // 15% discount
    }
    return cost;
}

double calculateTotalBill(int age, char houseType, double kWh) {
    double baseRate = getBaseRate(houseType);
    double cost = calculateConsumptionCost(baseRate, kWh);
    double total = applyAgeAdjustment(age, cost);
    return total;
}

int main() {
    int age;
    char houseType;
    double kWh;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your house type (A for apartment, V for villa): ");
    scanf(" %c", &houseType);

    printf("Enter your monthly consumption (kWh): ");
    scanf("%lf", &kWh);

    double totalBill = calculateTotalBill(age, houseType, kWh);
    printf("Your total electricity bill is: %.2lf TL\n", totalBill);

    return 0;
}
