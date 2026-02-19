// Let's conversion of a distance from miles to kilometres

#include <stdio.h>

int main() {

    double miles, kilometres;
    printf("Enter distance in miles: ");
    scanf("%lf", &miles);
    kilometres = miles * 1.60934; // 1 mile is approximately 1.60934 kilometers
    printf("%.2lf miles is equal to %.2lf kilometers.\n", miles, kilometres);
    return 0;
}