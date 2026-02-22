#include <stdio.h>

double calculate_circle_area(double radius) {
    return 3.14159 * radius * radius;
}

double calculate_circle_circumference(double radius) {
    return 3.14159 * 2 * radius;
}

double calculate_cylinder_volume(double radius, double height) {
    double base_area = calculate_circle_area(radius);
    return base_area * height;
}

double calculate_cylinder_surface_area(double radius, double height) {
    double base_area = calculate_circle_area(radius);
    double circumference = calculate_circle_circumference(radius);
    double lateral_area = circumference * height;
    return 2 * base_area * lateral_area;
}

int main() {

    double radius, height; 

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Enter height: ");
    scanf("%lf", &height);

    double volume = calculate_cylinder_volume(radius, height);
    double surface = calculate_cylinder_surface_area(radius, height);

    printf("Volume: %.2lf cubic meters\n", volume);
    printf("Surface Area: %.2lf square meters\n", surface);

    return 0;
}