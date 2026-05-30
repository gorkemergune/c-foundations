#include <stdio.h>

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


/* ===================== Q1 ===================== */
// `int *find_max_ptr(int *arr, int size)`
// find max number's address

int *find_max_ptr(int *arr, int size) {
    int *max; 
    max = arr;
    while (size > 0) {
        if (max < arr) max = arr;
        arr++;
        size--;
    } return max;
}

/* ===================== Q2 ===================== */
// `int count_char(const char *s, char target)`
// count target in word `banana, a` → `3`

int count_char(const char *s, char target) {
    int counter = 0;
    while (*s) {
        if (*s == target) counter++;
        s++;
    } return counter;
} 

/* ===================== Q3 ===================== */
// `void reverse_in_place(char *s)`
// dont use extra string + reverse the string `WELCOME` → `EMOCLEW`

void reverse_in_place(char *s) {
    char temp;
    int first = 0;
    int last = 0;
    char *p = s;
    while (*p) {
        last++;
        p++;
    } last--;
    
    while (first <= last) {
        temp = s[first];
        s[first] = s[last];
        s[last] = temp;
        first++;
        last--;
    }
} 

/* ===================== Q4 ===================== */
// `void move_zeros(int *arr, int size)`
// dont use extra arr, move all zeros to end of the arr. `{0, 1, 0, 3, 12}` → `{1, 3, 12, 0, 0}`

void move_zeros(int *arr, int size) {
    int w = 0;                
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[w] = arr[i];  
            w++;
        }
    }
    while (w < size) {         
        arr[w] = 0;
        w++;
    }
}

/* ===================== Q5 ===================== */
// `int is_palindrome_rec(const char *s, int left, int right)`
// Check the string is it Palindrome? `1` (yes) / `0` (no)  `"level"` → `1`, `"hello"` → `0`

int is_palindrome_rec(const char *s, int left, int right) {
    if (left >= right) return 1;
    if (s[left] != s[right]) return 0;
    return is_palindrome_rec(s, left + 1, right - 1);
}

/* ===================== Q6 ===================== */
// `int gcd(int a, int b)`
// Find the gcd of two nums. [gcd(a, b) = gcd(a, b - a)]  `gcd(48, 18)` → `6`

int gcd(int a, int b) {
    if (a == b) return a;
    if (a > b) return gcd(a-b, b);
    else return gcd(a, b-a);
}


/* ===================== Q7 ===================== */
// `int max_rec(const int *arr, int size)`
// Find max num of arr with recursive. `{4, 9, 2, 7}` → `9`

int max_rec(const int *arr, int size) {
    if (size == 1) return arr[0];
    int max = max_rec(arr + 1, size - 1);
    if (arr[0] > max) return arr[0];
    else return max;
}

/* ===================== Q8 ===================== */
// `int count_set_bits(unsigned int n)`
// Count how many 1s does it contain on binary.  `count_set_bits(13) (13 = `1101`)` → `3`

int count_set_bits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;  
        n >>= 1;        
    }
    return count;
}

/* ===================== Q9 ===================== */
// `int is_power_of_two(unsigned int n)`
// Does n is power of 2?  `16` → `1`, `18` → `0`, `0` → `0`

int is_power_of_two(unsigned int n) {
    int c = n & n - 1;
    if (c == 0) return 1;
    else return 0;
}

/* ===================== Q10 ===================== */
// `void xor_swap(int *a, int *b)`
// dont use temp, use only XOR. `a = 5, b = 9` → after recall `a = 9, b = 5`
// a = 0101, b = 1001

void xor_swap(int *a, int *b) {
    if (a == b) return;
    *a = *a ^ *b;
    *b = *a ^ *b;          
    *a = *a ^ *b;        
}

/* ===================== Q11 ===================== */
// `void reverse_words(char *s)`
// Change word's order, reverse it. `"Hello guys we are"` → `"are we guys Hello"`

void reverse_words(char *s) {
    int space_count = 0;
    char *p = s;
    while (*p) {
        if (*p == ' ') space_count++;
        p++;
    }
    char *words[space_count + 1];
    int index = 0;
    char *start = s;
    for (int i = 0; i <= space_count; i++) {
        words[i] = start;
        while (*start && *start != ' ') {
            start++;
        }
        if (*start) {
            *start = '\0';
            start++;
        }
    }
    for (int i = space_count; i >= 0; i--) {
        printf("%s ", words[i]);
    }
}




int main() {

    int arr[] = {3, 7, 2, 9, 4};
    printf("Q1:  %p\n\n", find_max_ptr(arr, 5));

    printf("Q2:  %d\n\n", count_char("banana", 'a'));  
    
    char s[] = "WELCOME";
    reverse_in_place(s);
    printf("Q3: %s\n\n", s);           

    int arr4[] = {0, 1, 0, 3, 12};
    move_zeros(arr4, 5);
    printf("Q4: ");
    print_arr(arr4, 5);
    printf("\n");

    printf("Q5: ");
    printf("`level`:%d ", is_palindrome_rec("level", 0, 4));
    printf("  'hello`:%d\n\n", is_palindrome_rec("hello", 0, 4));

    printf("Q6: %d\n\n", gcd(48,18));

    int arr5[] = {4, 9, 2, 7};

    printf("Q7: arr 1: %d, arr 2: %d,  arr 3: %d \n\n", max_rec(arr, 5), max_rec(arr4, 5), max_rec(arr5, 4));

    printf("Q8: %d\n\n", count_set_bits(13));

    printf("Q9: 16?: %d,  7?: %d\n\n",is_power_of_two(16), is_power_of_two(7));

    int a = 5, b = 9;
    xor_swap(&a, &b);
    printf("Q10: a: %d, b: %d\n\n", a, b);

    char s2[] = "Hello guys we are";
    printf("Q11: ");
    reverse_words(s2);
    printf("\n\n");

    return 0;
}