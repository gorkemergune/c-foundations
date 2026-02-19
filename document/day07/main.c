#include <stdio.h>


void exampleFunction() {  // declaration of a function
    printf("This is an example function.\n");  // definition of a function
}
void theyName(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}
void calculater(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is %d.\n", a, b, sum);
}
void numbers(int myNum[5]) {
    for(int i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, myNum[i]);
    }
}
// void returnFunction(int k, int m) {
//    return k + m;     // void function cannot return a value !!!! //
// }
int returnFunction(int k, int m) {
    return k + m;
}
float toCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}
int h = 5; // Global scope
void mh() {
    int h = 22;
    printf("%d\n", h); // Function scope
}
int g = 10; // Global scope
void gh() {
    g = 15; // Function scope
    printf("%d\n", g);
}


int main() {
    printf("Hello, Day 07!\n");
    exampleFunction();
    theyName("Gorkem", 21);
    theyName("Kaan", 19);
    calculater(5, 10);
    int myNum[5] = {10, 20, 30, 40, 50};
    numbers(myNum);
    int result = returnFunction(3, 4);
    printf("Result: %d\n", result);

    float f_value = 98.8;
    float resultf = toCelsius(f_value);
    printf("Fahrenheit: %.2f\n", f_value);
    printf("Convert Fahrenheit to Celsius: %.2f\n", resultf);

    mh(); // Call the function mh -- 22
    printf("%d\n", h); // Global scope -- 5
    gh(); // Call the function gh -- change global g to 15
    printf("%d\n", g); // Global scope -- 15


    return 0;
}

