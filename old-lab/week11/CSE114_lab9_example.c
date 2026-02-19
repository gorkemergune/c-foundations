#include <stdio.h>
#include <string.h>

//Example 1: Check if integer array is symmetric
//Symmetric: [1, 2, 3, 2, 1] or [5, 10, 10, 5]
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

//Example 2: Check if string has same first and last character
int same_ends(char *first, char *last) {
    // Handle empty or single char
    if (first >= last) return 1;

    return (*first == *last) ? 1 : 0;
}

//Example 3: Sum with accumulator
int sum_tail(int n, int accumulator) {
    // BASE CASE
    if (n == 0) return accumulator;

    // TAIL RECURSIVE CASE
    return sum_tail(n - 1, accumulator + n);
}

//Example 4: Hanoi of towers
/**
 * Recursive function to solve Tower of Hanoi
 * n      : Number of disks to move
 * source : The peg where disks are currently located
 * aux    : The peg used as a helper
 * dest   : The target peg where disks need to go
 */
void hanoi(int n, char source, char aux, char dest) {
    // Base Case: If there is only 1 disk, move it directly to destination
    if (n == 1) {
        printf("Move disk from %c to %c\n", source, dest);
        return;
    }

    // Recursive Step 1: Move n-1 disks from Source to Aux
    // (We switch the roles of dest and aux here)
    hanoi(n - 1, source, dest, aux);

    // Step 2: Move the remaining largest disk from Source to Dest
    printf("Move disk from %c to %c\n", source, dest);

    // Recursive Step 3: Move the n-1 disks from Aux to Dest
    // (We switch the roles of source and aux here)
    hanoi(n - 1, aux, source, dest);
}

int main() {
    int sym1[] = {1, 2, 3, 2, 1};
    int result1 = is_symmetric_array(sym1, sym1 + 4);
    printf("Result: %s\n\n", result1 ? "Symmetric" : "Not Symmetric");
    
    printf("sum_tail(10, 0) = %d\n\n", sum_tail(10, 0));
    
    printf("Hanoi\n");
    hanoi(10, 'A', 'B', 'C');
    return 0;
}
