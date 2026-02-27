#include <stdio.h>

void example1_data_types() {
    int year = 2026;
    float temperature = 16.5;
    double gravity = 9.80665;
    char section = 'B';
    printf("Year:%d Temp:%.1f Gravity:%.5lf Section:%c\n", year,
temperature, gravity, section);
}



void example2_variable_declaration_assignment() {
    int p = 14;
    int q = 6;
    int r = p * q;
    printf("p=%d q=%d r=%d\n", p, q, r);
}



void example3_declaration_with_initialization() {
    int n1 = 2, n2 = 6 , n3 = 8;
    printf("n1=%d n2=%d n3=%d\n", n1, n2, n3);
}



int multiply(int a, int b) {
    return a * b;
}
void example4_function_definition() {
    int result = multiply(5, 4);
    printf("Product = %d\n", result);
}



void showMessage() {
    printf("Welcome to basic C practice!\n");
}
void example5_void_function() {
    showMessage();
}



void example6_arithmetic_operators() {
    int x = 18, y = 5;
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x % y = %d\n", x % y);
}



void example7_relational_operators(void) {
    int a = 12, b = 12;
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
}



void example8_logical_operators(void) {
    int score = 72;
    int attendance = 1;
    printf("Pass condition : %d\n", (score >= 50) && (attendance == 1));
    printf("Extra chance : %d\n", (score < 50) | (attendance == 1));
    printf("Not passed : %d\n", (score < 50));
}



void example9_increment_decrement_assignment(void) {
    int counter = 3;
    counter++;
    printf("After ++counter : %d\n", counter);
    counter--;
    printf("After counter-- : %d\n", counter);
    counter*=4;
    printf("After counter*=4: %d\n", counter);
    }



float rectangleArea(float width, float height) {
    return width * height;
}
void example10_mini_combined(void) {
    float w = 7.0f, h = 2.5f;
    float area = rectangleArea(w, h);
    printf("Width: %.1f, Height: %.1f\n", w, h);
    printf("Rectangle Area: %.2f\n", area);
}



int main() {
    example1_data_types();
    example2_variable_declaration_assignment();
    example3_declaration_with_initialization();
    example4_function_definition();
    example5_void_function();
    example6_arithmetic_operators();
    example7_relational_operators();
    example8_logical_operators();
    example9_increment_decrement_assignment();
    example10_mini_combined();
    
    return 0;
}




