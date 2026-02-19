#include <stdio.h>

// ==========================================
// Part 1: Basic Pointer Declaration & Dereferencing
// ==========================================

// Problem 1
void longPointerOps() {
    printf("\n--- Problem 1: Long Integer Pointer Basics ---\n");
    long bigNum = 100000;
    long* ptr = &bigNum;

    printf("Value of bigNum: %ld\n", bigNum);
    printf("Value via ptr: %ld\n", *ptr);
    printf("Address of bigNum: %p\n", (void*)&bigNum);
    printf("Address stored in ptr: %p\n", (void*)ptr);
}

// Problem 2
void doublePointerOps() {
    printf("\n--- Problem 2: Double Pointer Basics ---\n");
    double gravity = 9.81;
    double* p_gravity = &gravity;

    printf("Value of gravity: %.2f\n", gravity);
    printf("Value via p_gravity: %.2f\n", *p_gravity);
    printf("Address of gravity: %p\n", (void*)&gravity);
}

// Problem 3
void charChangeCase() {
    printf("\n--- Problem 3: Character Pointer - Change Case ---\n");
    char ch = 'a';
    char* p_ch = &ch;

    *p_ch = 'A'; // Change case via pointer

    printf("New value of ch: %c\n", ch);
}

// ==========================================
// Part 2: Updating Variables Using Pointers
// ==========================================

// Problem 4
void modifyBalance() {
    printf("\n--- Problem 4: Modifying Float ---\n");
    float balance = 100.50f;
    float* p_bal = &balance;

    *p_bal = 250.75f;

    printf("Balance after modification: %.2f\n", balance);
}

// Problem 5
void updateTemperature() {
    printf("\n--- Problem 5: Modifying Temperature ---\n");
    double temp = 36.5;
    double* p_temp = &temp;

    *p_temp = 37.2;

    printf("Temperature after modification: %.1f\n", temp);
}

// Problem 6
void clampValue(int* p_val, int min, int max) {
    if (*p_val < min) {
        *p_val = min;
    } else if (*p_val > max) {
        *p_val = max;
    }
}

// ==========================================
// Part 3: Pointer Arithmetic on Arrays
// ==========================================

// Problem 7
void printDoubleArrayPtr(double* arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%.1f ", *(arr + i));
    }
    printf("\n");
}

// Problem 8
float avgArrayPtr(int* arr, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum / size;
}

// Problem 9
int findMaxPtr(int* arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

// ==========================================
// Part 4: Functions and Pointers
// ==========================================

// Problem 10
void swapFloats(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Problem 11
void negate(int* n) {
    *n = *n * -1;
}

// Problem 12
void rect_stats(int width, int height, int* area, int* perimeter) {
    *area = width * height;
    *perimeter = 2 * (width + height);
}

// ==========================================
// Part 5: Double Pointers
// ==========================================

// Problem 13
void demonstrateDoublePtrFloat() {
    printf("\n--- Problem 13: Double Pointer to Float ---\n");
    float f = 3.14f;
    float* ptr = &f;
    float** pptr = &ptr;

    printf("Value of f via ptr: %.2f\n", *ptr);
    printf("Value of f via pptr: %.2f\n", **pptr);
}

// Problem 14
void modifyCharViaDoublePtr(char** pp) {
    **pp = 'Z';
}

// Problem 15
void pointToMax(int** pp, int* a, int* b) {
    if (*a > *b) {
        *pp = a;
    } else {
        *pp = b;
    }
}

// ==========================================
// Main Function (Test Harness)
// ==========================================
int main() {
    // Part 1
    longPointerOps();
    doublePointerOps();
    charChangeCase();

    // Part 2
    modifyBalance();
    updateTemperature();

    printf("\n--- Problem 6: Clamp Value ---\n");
    int val = 150;
    printf("Before clamp (150, 0-100): %d\n", val);
    clampValue(&val, 0, 100);
    printf("After clamp: %d\n", val);

    val = -10;
    printf("Before clamp (-10, 0-100): %d\n", val);
    clampValue(&val, 0, 100);
    printf("After clamp: %d\n", val);

    // Part 3
    printf("\n--- Problem 7: Double Array Traversal ---\n");
    double dArr[] = { 1.1, 2.2, 3.3, 4.4 };
    printDoubleArrayPtr(dArr, 4);

    printf("\n--- Problem 8: Average of Array ---\n");
    int iArr[] = { 10, 20, 30, 40, 50 };
    printf("Average: %.2f\n", avgArrayPtr(iArr, 5));

    printf("\n--- Problem 9: Find Max ---\n");
    int maxArr[] = { 5, 12, 3, 9, 1 };
    printf("Max: %d\n", findMaxPtr(maxArr, 5));

    // Part 4
    printf("\n--- Problem 10: Swap Floats ---\n");
    float f1 = 1.5, f2 = 2.5;
    printf("Before swap: f1=%.1f, f2=%.1f\n", f1, f2);
    swapFloats(&f1, &f2);
    printf("After swap: f1=%.1f, f2=%.1f\n", f1, f2);

    printf("\n--- Problem 11: Negate ---\n");
    int n = 10;
    printf("Before negate: %d\n", n);
    negate(&n);
    printf("After negate: %d\n", n);

    printf("\n--- Problem 12: Rect Stats ---\n");
    int area, perim;
    rect_stats(5, 10, &area, &perim);
    printf("Width=5, Height=10 -> Area=%d, Perimeter=%d\n", area, perim);

    // Part 5
    demonstrateDoublePtrFloat();

    printf("\n--- Problem 14: Modify Char via Double Pointer ---\n");
    char c = 'A';
    char* p_c = &c;
    char** pp_c = &p_c;
    printf("Before: %c\n", c);
    modifyCharViaDoublePtr(pp_c);
    printf("After: %c\n", c);

    printf("\n--- Problem 15: Point to Max ---\n");
    int x = 10, y = 20;
    int* ptr = &x;
    int** pp = &ptr;
    printf("Pointer points to: %d\n", *ptr);
    pointToMax(pp, &x, &y);
    printf("Pointer now points to: %d\n", *ptr);

    return 0;
}
