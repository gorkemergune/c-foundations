/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
     char temp = *x;
     *x = *y;
     *y = temp;
}

int string_len(char *s) {
    int len = 0;
    while (s[len]) len++;
    return len;
}

void print_arr(char *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%c", arr[i]);
    } printf("\n");
}    

void anagram(char *a, int l, int r) {
    if (l == r) {
        printf("%s\n", a);
    } else {
        for (int i = 1; i <= r; i++) {
            swap((a + l), (a + i));
            anagram(a, l + 1, r);
            swap((a + 1), (a + i));
            print_arr(a, string_len(a));
        }
    }
}


 
void reverse_packet(char *packet, int l, int r) {
    if (l >= r) return;
    swap(&packet[l], &packet[r]);
    reverse_packet(packet, l + 1, r - 1);
}



void bitwise_even_odd(int n) {
    if (n & 1 == 0) {
        printf("%d -> Odd\n", n);
    } else {
        printf("%d -> Even\n", n);
    }
}

void bitwise_add(int a, int b) {
    // 5 =  0101
    // 10 = 1010
    // 15 = 1111
    int c = a ^ b;
    printf("%d + %d = %d\n", a, b, c);
}


void greetings() {
    int choice;
    
    while (1) {
        printf("Welcome to the Number Games Machine! By using this machine you can do:\n");
        printf("1. The Anagram Decryption\n");
        printf("2. Reverse Array\n");
        printf("3. Even / Odd\n");
        printf("4. Addition\n");
        printf("5. Exit\n");
        printf("Make your choice: ");
        scanf("%d", &choice);
        
    
        if (choice == 1) {
            char key[] = "CODE";
            anagram(key , 0, 3);
        } else if (choice == 2) {
            char packet[] = "ANOMALY";
            reverse_packet(packet , 0, 6);
            print_arr(packet, 7);
        } else if (choice == 3) {
            bitwise_even_odd(11);
        } else if (choice == 4) {
            bitwise_add(5, 10);
        } else if (choice == 5) {
            break;
        } else {
            printf("Enter correct number.\n");
        }
    }
}



int main()
{
    
    
    greetings();

    return 0;
}
