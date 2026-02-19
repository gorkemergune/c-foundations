# Prelab: Introduction to Pointers

## Overview
This prelab is designed to prepare you for the upcoming lab work on pointers. It covers the fundamental concepts of memory addresses, pointer declaration, dereferencing, and basic pointer arithmetic.

## Part 1: Conceptual Questions

1. **What does the `&` operator do in C?**
 -  a) Returns the value of a variable
 -  b) Returns the memory address of a variable
 -  c) Declares a pointer
 -  d) Dereferences a pointer

2. **What does the `*` operator do when placed before a pointer variable (e.g., `*ptr`)?**
 -  a) Returns the address of the pointer
 -  b) Declares a new variable
 -  c) Accesses the value stored at the address held by the pointer
 -  d) Multiplies the pointer by itself

3. **If `int x = 10;` and `int *p = &x;`, what is the type of `p`?**
 -  a) `int`
 -  b) `int *`
 -  c) `&int`
 -  d) `address`

4. **In a 64-bit system, what is the typical size of a pointer variable?**
 -  a) 2 bytes
 -  b) 4 bytes
 -  c) 8 bytes
 -  d) Depends on the type it points to

5. **Explain the difference between `ptr++` and `(*ptr)++`.**
 -  (Write your answer here)

6. **What is the value of a pointer initialized to `NULL`?**
 -  a) 0
 -  b) 1
 -  c) Random garbage value
 -  d) The address of the NULL variable

7. **Can a `void` pointer be dereferenced directly?**
 -  a) Yes
 -  b) No, it must be cast first
 -  c) Only if it points to an integer
 -  d) Only in C++

## Part 2: Code Tracing
Determine the output of the following code snippets.

### Snippet 1
```c
int a = 5;
int *p = &a;
*p = 10;
printf("%d", a);
```
**Output:** ________

### Snippet 2
```c
int arr[] = {10, 20, 30};
int *ptr = arr;
ptr++;
printf("%d", *ptr);
```
**Output:** ________

### Snippet 3
```c
int x = 50;
int *p1 = &x;
int **p2 = &p1;
**p2 = 100;
printf("%d", x);
```
**Output:** ________

### Snippet 4
```c
int arr[] = {10, 20, 30, 40};
int *p1 = arr;
int *p2 = arr + 2;
printf("%ld", p2 - p1);
```
**Output:** ________

### Snippet 5
```c
int arr[] = {50, 60};
int *p = arr;
int res = *p++;
printf("res=%d, *p=%d", res, *p);
```
**Output:** ________

## Part 3: Spot the Error
Identify the error in each of the following snippets.

### Snippet 1
```c
int *ptr;
*ptr = 10;
```
**Error:** __________________________________________________

### Snippet 2
```c
float pi = 3.14;
int *p = &pi;
```
**Error:** __________________________________________________

### Snippet 3
```c
int a = 5;
int *p = a;
```
**Error:** __________________________________________________

## Part 4: Simple Coding
Write short code snippets to solve the following.

1. **Declare and Initialize:**
   Declare an integer `count` initialized to 0. Declare a pointer `p_count` that points to `count`.

2. **Update via Pointer:**
   Using the pointer `p_count` from above, increment the value of `count` by 5.

3. **Print Address:**
   Print the memory address of `count` using the `%p` format specifier.

4. **Double Pointer:**
   Declare a double pointer `pp_count` that points to `p_count`. Use `pp_count` to print the value of `count`.
