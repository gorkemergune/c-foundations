#include <stdio.h>

int main() {

    int myAge = 45;
    printf("%p\n", &myAge); // Outputs the memory address of myAge
    int* ptr = &myAge; // Pointer to myAge
    printf("%p\n", ptr);    // Output the memory address of myAge with the pointer
    printf("%d\n", *ptr); // Memory address to myAge
    /* The Dual Role of the Asterisk (*)
    In Declaration (int* ptr): It creates a pointer variable. Instead of storing a value (like the number 5), it stores a memory address (the location of a value).
    Outside Declaration (*ptr): It acts as a dereference operator. It tells the computer to "go to the address stored in the pointer" and access the actual value kept there.
    To remember it easily:
    Declaration: "I am creating a pointer."
    Dereferencing: "Show me what's inside the address I'm pointing at."*/

    int myNums[4] = {25, 50, 75, 100};
    printf("%p\n", myNums); // Get the memory address of the myNums array
    printf("%p\n", &myNums[0]); // Get the memory address of the first array element
    // First array element memory address = Array memory address
    // We add number to reach another memory address

    int myNumbers[4] = {25, 50, 75, 100};
    *myNumbers = 13; // Change the value of the first element to 13
    *(myNumbers +1) = 17; // Change the value of the second element to 17
    printf("%d\n", *myNumbers); // Get the value of the first element
    printf("%d\n", *(myNumbers + 1)); // Get the value of the second element

    int myN[4] = {25, 50, 75, 100};
    int *p = myN;  // points to myN[0]
    printf("%d\n", *p);       // 25
    printf("%d\n", *(p + 1)); // 50
    printf("%d\n", *(p + 2)); // 75
    printf("%d\n", *(p + 3)); // 100

    int num[3] = {10, 20, 30};
    int *k = num;  // num[0]
    printf("%d\n", *k); // 10
    k++;           // move to num[1]
    printf("%d\n", *k); // 20
    k--;           // back to num[0]
    printf("%d\n", *k); // 10
    k += 2;        // jump to num[2]
    printf("%d\n", *k); // 30

    /* An int* pointer moves by the size of an integer (usually 4 bytes).
    A char* pointer moves by the size of a character (1 byte).
    So if both pointers start at memory address 1000:

    int* → p + 1 would move to address 1004
    char* → p + 1 would move to address 1001 */

    int mmNum[2] = {1, 2};
    char letters[] = "Hi"; // 'H', 'i', '\0'
    int *pi = mmNum; // int pointer
    char *pc = letters; // char pointer
    printf("%p\n", (void*)pi);
    printf("%p\n", (void*)(pi + 1)); // moves by sizeof(int) (4 bytes)
    printf("%p\n", (void*)(pi + 2)); // moves by sizeof(int) (4 bytes)
    printf("%p\n", (void*)pc);
    printf("%p\n", (void*)(pc + 1)); // moves by 1 byte
    // For char (1 byte):
    // If you add 1, the address moves 1 byte forward.
    // 1000 --> 1001
    // For int (4 bytes):
    // If you add 1, the address moves 4 bytes forward.
    // 1000 --> 1004

    /* Why use (void*)?
    In C, when you want to print a memory address using %p, the rules say
    you should use a void* (a "generic" pointer). It tells the computer: "Just show me the raw address, 
    don't worry about the data type." It is the standard and safest way to print pointers. */

    int mNumm = 10;       // normal variable
    int *ptr = &mNumm;    // pointer to int
    int **pptr = &ptr;    // pointer to pointer
    /* myNum holds the value 10.
    ptr holds the address of mNumm.
    pptr holds the address of ptr.
    *ptr gives the value of mNumm.
    **pptr also gives the value of myNum, by going through both pointers.*/

    /* A pointer to pointer stores the address of another pointer.
    *ptr gives the value of a variable.
    **pptr gives the same value by following two levels of indirection.
    They can be useful when passing pointers to functions or working with complex data structures. */

    return 0;
}