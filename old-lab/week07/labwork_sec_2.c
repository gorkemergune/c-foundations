#include <stdio.h>

// ==========================================
// Part 1: Basic Pointer Declaration & Dereferencing
// ==========================================

// Problem 1
void basicPointerOps() {
    printf("\n--- Problem 1: Integer Pointer Basics ---\n");
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value via ptr: %d\n", *ptr);
    printf("Address of num: %p\n", (void*)&num);
    printf("Address stored in ptr: %p\n", (void*)ptr);
}

// Problem 2
void floatPointerOps() {
    printf("\n--- Problem 2: Float Pointer Basics ---\n");
    float pi = 3.14f;
    float *p_pi = &pi;

    printf("Value of pi: %.2f\n", pi);
    printf("Value via p_pi: %.2f\n", *p_pi);
    printf("Address of pi: %p\n", (void*)&pi);
}

// Problem 3
void charPointerOps() {
    printf("\n--- Problem 3: Character Pointer Basics ---\n");
    char letter = 'A';
    char *p_letter = &letter;

    printf("Character via pointer: %c\n", *p_letter);
    printf("ASCII value via pointer: %d\n", *p_letter);
}

// ==========================================
// Part 2: Updating Variables Using Pointers
// ==========================================

// Problem 4
void modifyScore() {
    printf("\n--- Problem 4: Modifying Integer ---\n");
    int score = 0;
    int *p_score = &score;
    
    *p_score = 50; // Update via pointer
    
    printf("Score after modification: %d\n", score);
}

// Problem 5
void updatePrice() {
    printf("\n--- Problem 5: Modifying Double ---\n");
    double price = 9.99;
    double *p_price = &price;
    
    *p_price = 19.99;
    
    printf("Price after modification: %.2f\n", price);
}

// Problem 6
void checkAndReset(int *p_val) {
    if (*p_val > 50) {
        *p_val = 0;
    }
}

// ==========================================
// Part 3: Pointer Arithmetic on Arrays
// ==========================================

// Problem 7
void printArrayPtr(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Using pointer arithmetic
    }
    printf("\n");
}

// Problem 8
float sumArrayPtr(float *arr, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Problem 9
void printReversePtr(int *arr, int size) {
    printf("Reverse array: ");
    int *ptr = arr + size - 1; // Point to last element
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr--; // Move backwards
    }
    printf("\n");
}

// ==========================================
// Part 4: Functions and Pointers
// ==========================================

// Problem 10
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Problem 11
void doubleIt(int *n) {
    *n = *n * 2;
}

// Problem 12
void div_mod(int a, int b, int *div, int *mod) {
    if (b != 0) {
        *div = a / b;
        *mod = a % b;
    }
}

// ==========================================
// Part 5: Double Pointers
// ==========================================

// Problem 13
void demonstrateDoublePtr() {
    printf("\n--- Problem 13: Basic Double Pointer ---\n");
    int x = 100;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("Value of x via ptr: %d\n", *ptr);
    printf("Value of x via pptr: %d\n", **pptr);
}

// Problem 14
void modifyViaDoublePtr(int **pp) {
    **pp = 200;
}

// Problem 15
void pointToB(int **pp, int *newTarget) {
    *pp = newTarget;
}

// ==========================================
// Main Function (Test Harness)
// ==========================================
int main() {
    // Part 1
    basicPointerOps();
    floatPointerOps();
    charPointerOps();

    // Part 2
    modifyScore();
    updatePrice();
    
    printf("\n--- Problem 6: Conditional Update ---\n");
    int val = 100;
    printf("Before checkAndReset: %d\n", val);
    checkAndReset(&val);
    printf("After checkAndReset: %d\n", val);

    // Part 3
    printf("\n--- Problem 7: Array Traversal ---\n");
    int arr[] = {10, 20, 30, 40, 50};
    printArrayPtr(arr, 5);

    printf("\n--- Problem 8: Sum of Array ---\n");
    float fArr[] = {1.1, 2.2, 3.3};
    printf("Sum: %.2f\n", sumArrayPtr(fArr, 3));

    printf("\n--- Problem 9: Reverse Traversal ---\n");
    printReversePtr(arr, 5);

    // Part 4
    printf("\n--- Problem 10: Swap ---\n");
    int a = 5, b = 10;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    printf("\n--- Problem 11: Double It ---\n");
    int n = 7;
    printf("Before doubleIt: %d\n", n);
    doubleIt(&n);
    printf("After doubleIt: %d\n", n);

    printf("\n--- Problem 12: Div Mod ---\n");
    int d, m;
    div_mod(17, 5, &d, &m);
    printf("17 / 5 = %d, 17 %% 5 = %d\n", d, m);

    // Part 5
    demonstrateDoublePtr();

    printf("\n--- Problem 14: Modify via Double Pointer ---\n");
    int x = 100;
    int *ptr = &x;
    int **pptr = &ptr;
    printf("Before: %d\n", x);
    modifyViaDoublePtr(pptr);
    printf("After: %d\n", x);

    printf("\n--- Problem 15: Pointer Reassignment ---\n");
    int valA = 10, valB = 20;
    int *p = &valA;
    int **pp = &p;
    printf("Pointer points to value: %d\n", *p);
    pointToB(pp, &valB);
    printf("Pointer now points to value: %d\n", *p);

    return 0;
}
