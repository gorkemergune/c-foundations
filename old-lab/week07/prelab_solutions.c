#include <stdio.h>

// ==========================================
// Part 2: Code Tracing Verification
// ==========================================

void snippet1() {
    printf("\n--- Snippet 1 ---\n");
    int a = 5;
    int *p = &a;
    *p = 10;
    printf("Output: %d\n", a);
}

void snippet2() {
    printf("\n--- Snippet 2 ---\n");
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    ptr++;
    printf("Output: %d\n", *ptr);
}

void snippet3() {
    printf("\n--- Snippet 3 ---\n");
    int x = 50;
    int *p1 = &x;
    int **p2 = &p1;
    **p2 = 100;
    printf("Output: %d\n", x);
}

void snippet4() {
    printf("\n--- Snippet 4 ---\n");
    int arr[] = {10, 20, 30, 40};
    int *p1 = arr;
    int *p2 = arr + 2;
    printf("Output: %ld\n", p2 - p1);
}

void snippet5() {
    printf("\n--- Snippet 5 ---\n");
    int arr[] = {50, 60};
    int *p = arr;
    int res = *p++;
    printf("Output: res=%d, *p=%d\n", res, *p);
}

// ==========================================
// Part 3: Spot the Error (Corrected Versions)
// ==========================================

void errorSnippet1() {
    printf("\n--- Error Snippet 1 (Fixed) ---\n");
    int val = 0; // Need a variable to point to
    int *ptr = &val; // Initialize pointer
    *ptr = 10;
    printf("Fixed: *ptr = %d\n", *ptr);
}

void errorSnippet2() {
    printf("\n--- Error Snippet 2 (Fixed) ---\n");
    float pi = 3.14;
    float *p = &pi; // Type mismatch fixed: int* -> float*
    printf("Fixed: *p = %.2f\n", *p);
}

void errorSnippet3() {
    printf("\n--- Error Snippet 3 (Fixed) ---\n");
    int a = 5;
    int *p = &a; // Fixed: Assign address of a, not value of a
    printf("Fixed: *p = %d\n", *p);
}

// ==========================================
// Part 4: Simple Coding Solutions
// ==========================================

void simpleCoding() {
    printf("\n--- Part 4: Simple Coding ---\n");
    
    // 1. Declare and Initialize
    int count = 0;
    int *p_count = &count;
    
    // 2. Update via Pointer
    *p_count += 5;
    
    // 3. Print Address
    printf("Value of count: %d\n", count);
    printf("Address of count: %p\n", (void*)&count);
}

int main() {
    printf("=== Prelab Solutions Verification ===\n");
    
    snippet1();
    snippet2();
    snippet3();
    snippet4();
    snippet5();
    
    errorSnippet1();
    errorSnippet2();
    errorSnippet3();
    
    simpleCoding();
    
    return 0;
}
