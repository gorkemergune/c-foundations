#include <stdio.h>
#define PI 3.14159

double circle_area(double r) {
    return PI * r * r;
}

double circle_circumference(double r) {
    return 2 * PI * r;
}

double rectangle_area(double w, double h) {
    return w * h;
}

double cylinder_area(double r, double h) {
    return 2 * circle_area(r) + rectangle_area(circle_circumference(r), h);
}

double cylinder_volume(double r, double h) {
    return circle_area(r) * h;
}


int main() {
    double r, h, area, volume;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%lf %lf", &r, &h);
    area = cylinder_area(r, h);
    volume = cylinder_volume(r, h);
    printf("Surface area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);


    return 0;
}