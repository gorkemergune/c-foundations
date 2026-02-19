#include <stdio.h> 

// Task1: Cylinder Volume and Surface Area Calculator
double calculate_circle_area(double radius) {
    return 3.14159 * radius * radius;
}

double calculate_circle_circumference(double radius) {
    return 2 * 3.14159 * radius;
}


double calculate_cylinder_volume(double radius, double height) {
    double base_area = calculate_circle_area(radius);
    return base_area * height;
}

double calculate_cylinder_surface_area(double radius, double height) {
    double base_area = calculate_circle_area(radius);
    double circumference = calculate_circle_circumference(radius);
    double lateral_surface_area = circumference * height;
    return 2 * base_area + lateral_surface_area;
}

int main() {
    double radius, height; 

    printf("Please enter the radius of the cylinder (in meters): ");
    scanf("%lf", &radius); 

    printf("Please enter the height of the cylinder (in meters): ");
    scanf("%lf", &height); 

    double volume = calculate_cylinder_volume(radius, height);
    double surface_area = calculate_cylinder_surface_area(radius, height);

    printf("\n--- Calculation Results ---\n");
    printf("Cylinder Volume: %.2lf cubic meters\n", volume);
    printf("Cylinder Surface Area: %.2lf square meters\n", surface_area);
    printf("---------------------------\n");

    return 0; 
}

// Task2: Electricity Bill Calculator


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
