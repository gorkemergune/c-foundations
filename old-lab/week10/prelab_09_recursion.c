/*
 * ============================================================================
 * CSE114 - Prelab 9: Introduction to Recursion
 * ============================================================================
 * 
 * This prelab demonstrates recursive concepts that you will need
 * for Labwork 9. Study these examples carefully before the lab session.
 * 
 * Topics Covered:
 * 1. What is recursion? Base case vs Recursive case
 * 2. Simple number recursion
 * 3. Array recursion with pointers
 * 4. String recursion with pointers
 * 5. Two-pointer recursion technique
 * 
 * IMPORTANT: These are TEACHING examples. The labwork will have 
 * DIFFERENT problems that use the same techniques!
 * 
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

/* ============================================================================
 * PART 1: UNDERSTANDING RECURSION
 * ============================================================================
 * 
 * A recursive function has TWO essential parts:
 * 
 * 1. BASE CASE: The condition where recursion STOPS
 *    - Without this, you get infinite recursion (crash!)
 *    - Usually handles the simplest/smallest case
 * 
 * 2. RECURSIVE CASE: The function calls ITSELF
 *    - Must make progress toward the base case
 *    - Breaks the problem into smaller pieces
 * 
 * ============================================================================
 */

/* 
 * EXAMPLE 1: Countdown - The Simplest Recursion
 * 
 * This is NOT in your labwork, but teaches the basic pattern.
 */
void countdown(int n) {
    // BASE CASE: Stop when n reaches 0
    if (n == 0) {
        printf("Blastoff!\n");
        return;
    }
    
    // RECURSIVE CASE: Print and call with smaller value
    printf("%d... ", n);
    countdown(n - 1);
}

/*
 * EXAMPLE 2: Sum of Numbers from 1 to N
 * 
 * Sum(n) = 1 + 2 + 3 + ... + n
 * 
 * Recursive thinking:
 *   Sum(5) = 5 + Sum(4)
 *   Sum(4) = 4 + Sum(3)
 *   Sum(3) = 3 + Sum(2)
 *   Sum(2) = 2 + Sum(1)
 *   Sum(1) = 1  <-- BASE CASE
 */
int sum_1_to_n(int n) {
    printf("  sum_1_to_n(%d) called\n", n);
    
    // BASE CASE
    if (n == 1) {
        printf("  sum_1_to_n(1) returns 1 [BASE CASE]\n");
        return 1;
    }
    
    // RECURSIVE CASE: n + sum of (1 to n-1)
    int result = n + sum_1_to_n(n - 1);
    printf("  sum_1_to_n(%d) returns %d\n", n, result);
    return result;
}

/*
 * EXAMPLE 3: Check if a Number is Even (Recursive)
 * 
 * Even numbers: 0, 2, 4, 6, 8, ...
 * 
 * Recursive thinking:
 *   isEven(0) = true   <-- BASE CASE
 *   isEven(1) = false  <-- BASE CASE
 *   isEven(n) = isEven(n - 2)  for n > 1
 */
int is_even(int n) {
    // BASE CASES
    if (n == 0) return 1;  // 0 is even
    if (n == 1) return 0;  // 1 is odd
    
    // RECURSIVE CASE
    return is_even(n - 2);
}

/* ============================================================================
 * PART 2: RECURSION WITH DIGIT MANIPULATION
 * ============================================================================
 * 
 * Key operations for working with digits:
 *   n % 10  --> gives the LAST digit
 *   n / 10  --> REMOVES the last digit
 * 
 * Example with 1234:
 *   1234 % 10 = 4 (last digit)
 *   1234 / 10 = 123 (remaining digits)
 * 
 * ============================================================================
 */

/*
 * EXAMPLE 4: Count Even Digits in a Number
 * 
 * Different from labwork's "count digits" - this counts EVEN digits only
 */
int count_even_digits(int n) {
    // BASE CASE: single digit
    if (n < 10) {
        return (n % 2 == 0) ? 1 : 0;
    }
    
    // RECURSIVE CASE
    int last_digit = n % 10;
    int is_last_even = (last_digit % 2 == 0) ? 1 : 0;
    
    return is_last_even + count_even_digits(n / 10);
}

/*
 * EXAMPLE 5: Product of Digits
 * 
 * Different from "sum of digits" - this MULTIPLIES all digits
 * 
 * product_of_digits(234) = 2 * 3 * 4 = 24
 */
int product_of_digits(int n) {
    printf("  product_of_digits(%d) called\n", n);
    
    // BASE CASE: single digit
    if (n < 10) {
        printf("  product_of_digits(%d) returns %d [BASE CASE]\n", n, n);
        return n;
    }
    
    // RECURSIVE CASE
    int last = n % 10;
    int result = last * product_of_digits(n / 10);
    printf("  product_of_digits(%d) returns %d\n", n, result);
    return result;
}

/*
 * EXAMPLE 6: Check if All Digits are Odd
 */
int all_digits_odd(int n) {
    // BASE CASE: single digit
    if (n < 10) {
        return (n % 2 == 1) ? 1 : 0;
    }
    
    // Check last digit
    int last = n % 10;
    if (last % 2 == 0) return 0;  // Found even digit, return false
    
    // RECURSIVE CASE: check remaining digits
    return all_digits_odd(n / 10);
}

/* ============================================================================
 * PART 3: ARRAY RECURSION WITH POINTERS
 * ============================================================================
 * 
 * Two common patterns for array recursion:
 * 
 * PATTERN A: Process FIRST element, recurse on REST
 *   func(arr, size) = process(arr[0]) + func(arr + 1, size - 1)
 * 
 * PATTERN B: Recurse on FIRST part, process LAST element
 *   func(arr, size) = func(arr, size - 1) + process(arr[size-1])
 * 
 * ============================================================================
 */

/*
 * EXAMPLE 7: Product of Array Elements
 * 
 * Different from "sum" - this MULTIPLIES all elements
 */
int array_product(int *arr, int size) {
    printf("  array_product called with size=%d, first element=%d\n", size, *arr);
    
    // BASE CASE: single element
    if (size == 1) {
        printf("  Returning %d [BASE CASE]\n", arr[0]);
        return arr[0];
    }
    
    // RECURSIVE CASE: first element * product of rest
    int result = arr[0] * array_product(arr + 1, size - 1);
    printf("  Returning %d\n", result);
    return result;
}

/*
 * EXAMPLE 8: Count Occurrences of a Value in Array
 * 
 * Different from labwork - this counts HOW MANY times a value appears
 */
int count_occurrences(int *arr, int size, int target) {
    // BASE CASE: empty array
    if (size == 0) return 0;
    
    // Check first element and recurse
    int found = (arr[0] == target) ? 1 : 0;
    return found + count_occurrences(arr + 1, size - 1, target);
}

/*
 * EXAMPLE 9: Check if Array Contains Negative Number
 */
int has_negative(int *arr, int size) {
    // BASE CASE: empty array - no negatives found
    if (size == 0) return 0;
    
    // Check first element
    if (arr[0] < 0) return 1;  // Found negative!
    
    // RECURSIVE CASE: check rest of array
    return has_negative(arr + 1, size - 1);
}

/*
 * EXAMPLE 10: Sum of Elements at ODD Indices (1, 3, 5, ...)
 * 
 * Different from labwork's "even indices"
 */
int sum_odd_indices(int *arr, int size) {
    // BASE CASE: 0 or 1 elements - no odd index
    if (size <= 1) return 0;
    
    // Element at index 1 + recurse starting from index 2
    return arr[1] + sum_odd_indices(arr + 2, size - 2);
}

/* ============================================================================
 * PART 4: STRING RECURSION WITH POINTERS
 * ============================================================================
 * 
 * Key concept: A string is an array of characters ending with '\0'
 * 
 * Pattern: Process first character, recurse on rest
 *   func(str) = process(*str) + func(str + 1)
 *   Base case: *str == '\0' (empty string)
 * 
 * ============================================================================
 */

/*
 * EXAMPLE 11: Count Vowels in String
 * 
 * Different from labwork's "count character"
 */
int is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int count_vowels(char *str) {
    // BASE CASE: end of string
    if (*str == '\0') return 0;
    
    // Check current character and recurse
    int current = is_vowel(*str) ? 1 : 0;
    return current + count_vowels(str + 1);
}

/*
 * EXAMPLE 12: Count Uppercase Letters
 */
int count_uppercase(char *str) {
    // BASE CASE
    if (*str == '\0') return 0;
    
    // Check if current char is uppercase
    int is_upper = (*str >= 'A' && *str <= 'Z') ? 1 : 0;
    return is_upper + count_uppercase(str + 1);
}

/*
 * EXAMPLE 13: Print String Vertically (one char per line)
 */
void print_vertical(char *str) {
    // BASE CASE
    if (*str == '\0') return;
    
    // Print current character on new line
    printf("%c\n", *str);
    
    // Recurse on rest
    print_vertical(str + 1);
}

/*
 * EXAMPLE 14: Print String in Reverse (without modifying)
 * 
 * TRICK: Recurse FIRST, print AFTER returning
 */
void print_reverse(char *str) {
    // BASE CASE
    if (*str == '\0') return;
    
    // FIRST: recurse deeper
    print_reverse(str + 1);
    
    // THEN: print current (on the way back)
    printf("%c", *str);
}

/* ============================================================================
 * PART 5: TWO-POINTER RECURSION
 * ============================================================================
 * 
 * Used when you need to compare elements from both ends.
 * Common for: palindrome check, symmetric array, etc.
 * 
 * Pattern:
 *   - Two pointers: one at start, one at end
 *   - Compare, then move both inward
 *   - Base case: pointers meet or cross
 * 
 * ============================================================================
 */

/*
 * EXAMPLE 15: Check if Integer Array is Symmetric
 * 
 * Different from string palindrome - works on integers
 * Symmetric: [1, 2, 3, 2, 1] or [5, 10, 10, 5]
 */
int is_symmetric_array(int *left, int *right) {
    printf("  Comparing positions: left=%d, right=%d\n", *left, *right);
    
    // BASE CASE: pointers have met or crossed
    if (left >= right) {
        printf("  Pointers crossed - Array IS symmetric!\n");
        return 1;
    }
    
    // Compare elements
    if (*left != *right) {
        printf("  Mismatch found - Array is NOT symmetric\n");
        return 0;
    }
    
    // RECURSIVE CASE: move pointers inward
    return is_symmetric_array(left + 1, right - 1);
}

/*
 * EXAMPLE 16: Check if String has Same First and Last Character
 * 
 * Simpler version of palindrome - just checks ends
 */
int same_ends(char *first, char *last) {
    // Handle empty or single char
    if (first >= last) return 1;
    
    return (*first == *last) ? 1 : 0;
}

/* ============================================================================
 * PART 6: TAIL RECURSION (Bonus Concept)
 * ============================================================================
 * 
 * Tail recursion: The recursive call is the LAST operation.
 * Can be optimized by compilers into iteration.
 * 
 * ============================================================================
 */

/*
 * EXAMPLE 17: Sum with Accumulator (Tail Recursive)
 * 
 * Instead of: return n + func(n-1)  [NOT tail recursive]
 * Use:        return func(n-1, acc + n)  [IS tail recursive]
 */
int sum_tail(int n, int accumulator) {
    // BASE CASE
    if (n == 0) return accumulator;
    
    // TAIL RECURSIVE CASE
    return sum_tail(n - 1, accumulator + n);
}

/*
 * EXAMPLE 18: Find Position of Element (with accumulator for index)
 */
int find_position(int *arr, int size, int target, int current_index) {
    // BASE CASE: not found
    if (size == 0) return -1;
    
    // Found it!
    if (arr[0] == target) return current_index;
    
    // TAIL RECURSIVE CASE
    return find_position(arr + 1, size - 1, target, current_index + 1);
}

/* ============================================================================
 * MAIN FUNCTION - Demonstrations
 * ============================================================================
 */

int main() {
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║         CSE114 - Prelab 9: Introduction to Recursion         ║\n");
    printf("╠══════════════════════════════════════════════════════════════╣\n");
    printf("║  Study these examples - Labwork has DIFFERENT problems!      ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n\n");
    
    // PART 1: Basic Recursion
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("  PART 1: BASIC RECURSION CONCEPTS\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    
    printf("Example 1: Countdown\n");
    printf("─────────────────────\n");
    countdown(5);
    printf("\n");
    
    printf("Example 2: Sum from 1 to N (with tracing)\n");
    printf("──────────────────────────────────────────\n");
    printf("Calculating sum(1 to 5):\n");
    int sum_result = sum_1_to_n(5);
    printf("Result: 1+2+3+4+5 = %d\n\n", sum_result);
    
    printf("Example 3: Check Even (Recursive)\n");
    printf("──────────────────────────────────\n");
    printf("is_even(8) = %d (1=yes, 0=no)\n", is_even(8));
    printf("is_even(7) = %d\n\n", is_even(7));
    
    // PART 2: Digit Manipulation
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("  PART 2: DIGIT MANIPULATION\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    
    printf("Example 4: Count Even Digits\n");
    printf("────────────────────────────\n");
    printf("Even digits in 123456: %d\n", count_even_digits(123456));
    printf("Even digits in 13579: %d\n\n", count_even_digits(13579));
    
    printf("Example 5: Product of Digits (with tracing)\n");
    printf("────────────────────────────────────────────\n");
    printf("Calculating product of digits in 234:\n");
    int prod = product_of_digits(234);
    printf("Result: 2 × 3 × 4 = %d\n\n", prod);
    
    printf("Example 6: All Digits Odd?\n");
    printf("──────────────────────────\n");
    printf("all_digits_odd(13579) = %d\n", all_digits_odd(13579));
    printf("all_digits_odd(12345) = %d\n\n", all_digits_odd(12345));
    
    // PART 3: Array Recursion
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("  PART 3: ARRAY RECURSION WITH POINTERS\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    
    int arr1[] = {2, 3, 4, 5};
    int arr2[] = {10, 20, 10, 30, 10, 40};
    int arr3[] = {5, -3, 10, 2};
    int arr4[] = {1, 2, 3, 4, 5, 6};
    
    printf("Example 7: Product of Array\n");
    printf("────────────────────────────\n");
    printf("Array: {2, 3, 4, 5}\n");
    int arr_prod = array_product(arr1, 4);
    printf("Product: 2 × 3 × 4 × 5 = %d\n\n", arr_prod);
    
    printf("Example 8: Count Occurrences\n");
    printf("────────────────────────────\n");
    printf("Array: {10, 20, 10, 30, 10, 40}\n");
    printf("Count of 10: %d\n\n", count_occurrences(arr2, 6, 10));
    
    printf("Example 9: Has Negative?\n");
    printf("────────────────────────\n");
    printf("{5, -3, 10, 2} has negative: %d\n", has_negative(arr3, 4));
    printf("{2, 3, 4, 5} has negative: %d\n\n", has_negative(arr1, 4));
    
    printf("Example 10: Sum of Odd Indices\n");
    printf("──────────────────────────────\n");
    printf("Array: {1, 2, 3, 4, 5, 6}\n");
    printf("Indices: 0  1  2  3  4  5\n");
    printf("Sum at odd indices (2+4+6): %d\n\n", sum_odd_indices(arr4, 6));
    
    // PART 4: String Recursion
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("  PART 4: STRING RECURSION WITH POINTERS\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    
    char str1[] = "Hello World";
    char str2[] = "PROGRAMMING";
    char str3[] = "abc";
    
    printf("Example 11: Count Vowels\n");
    printf("────────────────────────\n");
    printf("Vowels in \"%s\": %d\n\n", str1, count_vowels(str1));
    
    printf("Example 12: Count Uppercase\n");
    printf("───────────────────────────\n");
    printf("Uppercase in \"%s\": %d\n\n", str2, count_uppercase(str2));
    
    printf("Example 13: Print Vertically\n");
    printf("────────────────────────────\n");
    printf("String: \"%s\"\n", str3);
    print_vertical(str3);
    printf("\n");
    
    printf("Example 14: Print in Reverse\n");
    printf("────────────────────────────\n");
    printf("Original: \"%s\"\n", str1);
    printf("Reversed: ");
    print_reverse(str1);
    printf("\n\n");
    
    // PART 5: Two-Pointer Recursion
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("  PART 5: TWO-POINTER RECURSION\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    
    int sym1[] = {1, 2, 3, 2, 1};
    int sym2[] = {1, 2, 3, 4, 5};
    
    printf("Example 15: Check Symmetric Array\n");
    printf("──────────────────────────────────\n");
    printf("Array: {1, 2, 3, 2, 1}\n");
    int result1 = is_symmetric_array(sym1, sym1 + 4);
    printf("Result: %s\n\n", result1 ? "Symmetric" : "Not Symmetric");
    
    printf("Array: {1, 2, 3, 4, 5}\n");
    int result2 = is_symmetric_array(sym2, sym2 + 4);
    printf("Result: %s\n\n", result2 ? "Symmetric" : "Not Symmetric");
    
    // PART 6: Tail Recursion
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("  PART 6: TAIL RECURSION (Bonus)\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    
    printf("Example 17: Sum with Accumulator\n");
    printf("─────────────────────────────────\n");
    printf("sum_tail(10, 0) = %d\n\n", sum_tail(10, 0));
    
    int search_arr[] = {10, 20, 30, 40, 50};
    printf("Example 18: Find Position\n");
    printf("─────────────────────────\n");
    printf("Array: {10, 20, 30, 40, 50}\n");
    printf("Position of 30: %d\n", find_position(search_arr, 5, 30, 0));
    printf("Position of 99: %d\n\n", find_position(search_arr, 5, 99, 0));
    
    // Summary
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║                    KEY TAKEAWAYS                             ║\n");
    printf("╠══════════════════════════════════════════════════════════════╣\n");
    printf("║  1. Every recursion needs a BASE CASE (stopping condition)   ║\n");
    printf("║  2. Each recursive call must make PROGRESS toward base case  ║\n");
    printf("║  3. For arrays: arr+1 moves to next element, size-1 shrinks  ║\n");
    printf("║  4. For strings: str+1 moves to next char, check for '\\0'    ║\n");
    printf("║  5. Two pointers: start from ends, move inward               ║\n");
    printf("╠══════════════════════════════════════════════════════════════╣\n");
    printf("║         Now you're ready for Labwork 9! Good luck!           ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n");
    
    return 0;
}

