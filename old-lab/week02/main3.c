#include <stdio.h>
#include <math.h>

float calculateDistance(int x1, int y1, int x2, int y2) {
    float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}

const char* detect_region(int x, int y) {
    if (x > 0 && y > 0) {
        return "Q1";
    } else if (x < 0 && y > 0) {
        return "Q2";
    } else if (x < 0 && y < 0) {
        return "Q3";
    } else if (x > 0 && y < 0) {
        return "Q4";
    } else if (x == 0 && y == 0) {
        return "Origin";
    } else if (x == 0) {
        return "Y-axis";
    } else if (y == 0) {
        return "X-axis";
    }
}

void draw_points(double distance) {
    // ilk önce distance'ı tam sayıya çeviriyoruz
    int rounded_distance = (int)(distance + 0.5); // 3.2'yi de 3.8'i 'de normalde 3'e yuvarlar ama 0.5 ekleyerek yeni sayı 3.7 veya 4.3 olduğundan dolayı 4'e yuvarlanır. C'de yuvarlama tekniğidir.
    // daha sonra bu tam sayı kadar yıldız basıyoruz
    printf("A");
    for (int i = 0; i < rounded_distance; i++) {
        printf("*");
    }
    printf("B\n");
}

void direction(int x1, int y1, int x2, int y2) {
    if (x2 > x1 && y2 > y1) { 
        printf("Direction: Northeast\n");
    } else if (x2 < x1 && y2 > y1) {
        printf("Direction: Northwest\n");
    } else if (x2 < x1 && y2 < y1) {
        printf("Direction: Southwest\n");
    } else if (x2 > x1 && y2 < y1) {
        printf("Direction: Southeast\n");
    } else if (x2 == x1 && y2 > y1) {
        printf("Direction: North\n");
    } else if (x2 == x1 && y2 < y1) {
        printf("Direction: South\n");
    } else if (x2 > x1 && y2 == y1) {
        printf("Direction: East\n");
    } else if (x2 < x1 && y2 == y1) {
        printf("Direction: West\n");
    } else {
        printf("The points are the same.\n");
    }
}

// Library → A (2, 4)
// Social Facilities → B (-4, 3)
// Engineering → C (-2, -6)
// Prep School → D (6, -2) tanımlicaz

typedef struct {
    char name; // A, B, C, D
    int x;
    int y;
} Point;
Point A = {'A', 2, 4};
Point B = {'B', -4, 3};
Point C = {'C', -2, -6};
Point D = {'D', 6, -2};

int student_map(int rounded_distance) {
    return rounded_distance / 2;
}

int main() {

    detect_region(A.x, A.y);
    detect_region(B.x, B.y);
    detect_region(C.x, C.y);
    detect_region(D.x, D.y);
    printf("Point %c is in the region: %s\n", A.name, detect_region(A.x, A.y));
    printf("Point %c is in the region: %s\n", B.name, detect_region(B.x, B.y));
    printf("Point %c is in the region: %s\n", C.name, detect_region(C.x, C.y));
    printf("Point %c is in the region: %s\n", D.name, detect_region(D.x, D.y));

    int a, b;
    printf("Enter first coordinate: ");
    scanf("%d %d", &a, &b);

    int c, d;
    printf("Enter second coordinate: ");
    scanf("%d %d", &c, &d);

    float distance = calculateDistance(a, b, c, d);
    printf("Distance between (%d, %d) and (%d, %d) is: %.2f\n", a, b, c, d, distance);

    const char* region1 = detect_region(a, b);
    const char* region2 = detect_region(c, d);

    printf("The points are in the region: %s\n", region1);
    printf("The points are in the region: %s\n", region2);

    draw_points(distance);

    direction(a, b, c, d);

    int kalori = student_map((int)(distance + 0.5));
    printf("You will burn: %d\n calories", kalori);

    return 0;
}
