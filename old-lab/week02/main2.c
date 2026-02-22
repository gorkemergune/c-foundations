#include <stdio.h>

double getBaseRate(char houseType) {
    double rate;
    if  (houseType == 'A' || houseType == 'a') {
        rate = 0.85;
    } else {
        rate = 1.10;
    }
    return rate;
}

double calculateConsumptionCost(double baseRate, double kWh) {
    double cost = baseRate * kWh;
    return cost;
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

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter house type: ");
    scanf(" %c", &houseType);

    printf("Enter kWh: ");
    scanf("%lf", &kWh);

    double totalBill = calculateTotalBill(age, houseType, kWh);
    printf("Total bill: %2.lf \n", totalBill);
}