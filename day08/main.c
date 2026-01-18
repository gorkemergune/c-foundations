#include <stdio.h>
#include <math.h>

int square(int x) {
  return x * x;
}
static inline int cube(int x) {
  return x * x * x;
}
// Inline functions are best for small, simple functions. Avoid using them for:
// Large functions (they make your program bigger)
// Recursive functions
// Functions that are rarely called
int sum(int k);
int factorial(int n);

void greetMorning() { printf("Good morning!\n"); } // void function with no parameters
void greetEvening() { printf("Good evening!\n"); } // do not return any value

void greet(void (*func)()) {
    func();
}    

void add(int a, int b) { printf("Result: %d\n", a + b); }
void subtract(int a, int b) { printf("Result: %d\n", a - b); }
void multiply(int a, int b) { printf("Result: %d\n", a * b); }

void sayHello() {
    printf("Hello from the callback!\n");
}

void runCallback(void (*callback)()) {
    printf("Before calling the callback...\n");
    callback();
    printf("After calling the callback.\n");
}


int main() {
    printf("Hello, Day 08!\n");
    printf("%f\n", sqrt(16)); // take square root
    printf("%f\n", ceil(1.4)); // rounding up
    printf("%f\n", floor(1.4)); // rounding down
    printf("%f\n", pow(4, 3)); // take power
    printf("%d\n", square(5)); // square function
    printf("%d\n", cube(3)); // cube function with inline

    /* Inline vs Regular Function
    Regular Function ---	Inline Function
    Code jumps to the function each time it's called  ---	Code is inserted directly where it's called
    Slightly slower (small delay) ---	Slightly faster
    Good for large functions ---	Good for small functions */

    int result = sum(5); // recursive function
    printf("Sum is: %d\n", result);
    int fact = factorial(5); // recursive function
    printf("Factorial is: %d\n", fact);

    greet(greetMorning); // function pointer as argument    
    greet(greetEvening); // function pointer as argument

    int choice, x = 10, y = 5;
    void (*operation[3])(int, int) = {add, subtract, multiply}; // array of function pointers
    printf("Choose operation: 0-Add, 1-Subtract, 2-Multiply: ");
    scanf("%d", &choice);
    if (choice >= 0 && choice < 3) {
        operation[choice](x, y); // call the selected function
    } else {
        printf("Invalid choice\n");
    }

    runCallback(sayHello); // passing function as callback 
    // one function is passed to another function as an argument
    
    return 0;
}

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}
int factorial(int n) {
    if (n >= 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}