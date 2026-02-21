#include <stdio.h>

double calculate_circle_area(double radius) {
    return 3.14159 * radius * radius;
}

double calculate_circle_circumference(double radius) {
    return 3.14159 * 2 * radius;
}

double calculate_cylinder_volume(double radius, double height) {
    double base_area = 3.14159 * radius * radius;
    return base_area * height;
}

double calculate_cylinder_surface_area(double radius, double height) {
    
}