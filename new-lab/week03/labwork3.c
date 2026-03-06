#include <stdio.h>


int meeting_calculator(int m, int n) {
    int state = 0; // çift
    if (n % 2 != 0) {
        state = 1; // tek
    }if (state = 1) {
        return (n / 2) * (n / 2 + 1);
    } else if (state = 0) {
        return (n / 2) * (n / 2);
    }
}


char * detect_region(int x, int y) {
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
    } else {
        return "Axis";
    }
    
}

void print_region(int x1, int x2, int x3, int y1, int y2, int y3) {
    printf("Enter first location: ");
    scanf("%d %d", &x1, &y1);  
    printf("Enter second location: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter third location: ");
    scanf("%d %d", &x3, &y3);
    printf("First: %s\n", detect_region(x1, y1));
    printf("Second: %s\n", detect_region(x2, y2));
    printf("Third: %s\n", detect_region(x3, y3));
}


int compare_two(int x, int y) {
    int score = 0;
    if (detect_region(x, y) == "Q1") {
        score += 5 * x;
    } else if (detect_region(x, y) == "Q2") {
        score += 1 * x;
    } else if (detect_region(x, y) == "Q3") {
        score += 2 * x;
    } else if (detect_region(x, y) == "Q4") {
        score += 3 * x;
    }
    return score;
}    


int main(){
    
    int m, n; // m: ay, n: gün
    printf("Enter the month number: ");
    scanf("%d", &m);
    printf("Enter the day: ");
    scanf("%d", &n);
    printf("The total meeting number is %d\n", meeting_calculator(m, n));
    
    int x1, x2, x3, y1, y2, y3, x, y;
    print_region(x1, x2, x3, y1, y2, y3);
    int s1 = compare_two(x, y);
    printf("Total score is %d\n", s1);
    print_region(x1, x2, x3, y1, y2, y3);
    int s2 = compare_two(x, y);
    printf("Total score is %d\n", s2);
    if (s1 > s2) {
        printf("Selected person: A");
    } else {
        printf("Selected person: B");
    }
    
    return 0;
}