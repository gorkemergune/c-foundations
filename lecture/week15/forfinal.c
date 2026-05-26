#include <stdio.h>

/* ===================== PRINT STRING ===================== */

void print_str(char *arr) {
    while (*arr) {
        printf("%c", *arr);
        arr++;
    }
    printf("\n");
}

void print_str_rec(char *str) {
    if (*str == '\0') {
        printf("\n");
        return;
    }

    printf("%c", *str);
    print_str_rec(str + 1);
}

/* ===================== PRINT ARRAY ===================== */

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_arr_rec(int *arr, int size, int i) {
    if (i == size) {
        printf("\n");
        return;
    }

    printf("%d ", arr[i]);
    print_arr_rec(arr, size, i + 1);
}

/* ===================== SENTINEL LENGTH ===================== */

int findLenWithSentinel(int arr[]) {
    int len = 0;
    while (arr[len] != 0) {
        len++;
    }
    return len;
}

/* ===================== STRING REVERSE ===================== */

void reverse_str(char *dest, const char *src) {
    int len = 0;

    while (src[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        dest[i] = src[len - 1 - i];
    }

    dest[len] = '\0';
}

/* recursive string reverse */
void reverse_str_rec(char *dest, const char *src, int i) {
    if (*src == '\0') {
        dest[i] = '\0';
        return;
    }

    reverse_str_rec(dest, src + 1, i + 1);
    dest[i] = *src;
}

/* ===================== ARRAY REVERSE ===================== */

void reverse_arr(int *dest, const int *src, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[size - 1 - i];
    }
}

/* recursive array reverse (safe index version) */
void reverse_arr_rec(int *dest, const int *src, int size, int i) {
    if (size == 0) return;

    dest[i] = src[size - 1];
    reverse_arr_rec(dest, src, size - 1, i + 1);
}

/* alternative recursive reverse */
void reverse_arr_rec2(int *dest, const int *src, int size) {
    if (size == 0) return;

    dest[size - 1] = src[0];
    reverse_arr_rec2(dest, src + 1, size - 1);
}

/* ===================== SUM DIGITS ===================== */

int findSum(int n) {
    if (n < 10) return n;
    return (n % 10) + findSum(n / 10);
}

/* ===================== ARRAY SUMS ===================== */

int findNegSum(int arr[], int size) {
    if (size == 0) return 0;

    if (arr[0] < 0)
        return arr[0] + findNegSum(arr + 1, size - 1);

    return findNegSum(arr + 1, size - 1);
}

int findPosSum(int arr[], int size) {
    if (size == 0) return 0;

    if (arr[0] > 0)
        return arr[0] + findPosSum(arr + 1, size - 1);

    return findPosSum(arr + 1, size - 1);
}

int findSumArr(int arr[], int size) {
    if (size == 0) return 0;
    return arr[0] + findSumArr(arr + 1, size - 1);
}

int findSumArr2(int arr[], int size) {
    return findNegSum(arr, size) + findPosSum(arr, size);
}

/* ===================== COPY FUNCTIONS ===================== */

void copyString(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

void copyArr(int *dest, const int *src, int size) {
    while (size > 0) {
        *dest = *src;
        src++;
        dest++;
        size--;
    }
}

/* ===================== NUMBER REVERSE ===================== */

int reverse_num_rec(int n, int rev) {
    if (n == 0) return rev;
    return reverse_num_rec(n / 10, rev * 10 + (n % 10));
}

/* ===================== FIND Nth WORD LAST CHAR ADDRESS ===================== */

char *find_nth_last(char *s, int n) {
    int word = 0;
    char *last = NULL;

    while (*s) {
        while (*s == ' ') s++;
        if (!*s) break;
        last = s;

        while (*s && *s != ' ') {
            last = s;
            s++;
        }
        if (word == n)
            return last;
        word++;
    }
    return NULL;
}

char *find_nth_first(char *s, int n) {
    int word = 0;

    while (*s) {
        while (*s == ' ') s++;
        if (!*s) break;

        if (word == n)
            return s;
        word++;
        while (*s && *s != ' ') s++;
    }
    return NULL;
}
/* ===================== COPY WORD AND REVERSE ===================== */

void copy_and_reverse(char *first, char *last, char *dest) {
    printf("first: %c\n", *first);
    printf("last: %c\n", *last);
    if (!first || !last || first > last) return;
    int len = last - first + 1;

    for (int i = 0; i < len; i++) {
        dest[i] = first[len - 1 - i];
    } dest[len] = '\0';
    print_str(dest);
}

/* ===================== MAIN ===================== */

int main() {

    printf("findSum 587: %d\n", findSum(587));
    printf("findSum 5: %d\n", findSum(5));
    printf("findSum 555555: %d\n", findSum(555555));

    int myArr[10] = {-6, 7, 8, -10, 4, 5, 2, -1, 6, -7};

    int myArr2[11] = {-6, 7, 8, -10, 4, 5, 2, -1, 6, -7, 0};

    printf("Len (sentinel): %d\n", findLenWithSentinel(myArr2));

    int size = 10;

    printf("Neg sum: %d\n", findNegSum(myArr, size));
    printf("Pos sum: %d\n", findPosSum(myArr, size));
    printf("Total sum: %d | %d\n", findSumArr(myArr, size), findSumArr2(myArr, size));

    char mySt[] = "Hello guys we are studying C";

    char copy[100];
    copyString(copy, mySt);
    print_str(copy);

    int myArr3[10];
    copyArr(myArr3, myArr, size);
    print_arr(myArr3, size);

    char revs[] = "WELCOME";
    char copr[100];
    char coprr[100];

    reverse_str(copr, revs);
    print_str(copr);

    reverse_str_rec(coprr, revs, 0);
    print_str(coprr);

    int reva[] = {2, 3, 7, 8, 4};

    int revv[5];
    int revvv[5];

    reverse_arr(revv, reva, 5);
    reverse_arr_rec(revvv, reva, 5, 0);

    print_arr(revv, 5);
    print_arr(revvv, 5);

    printf("%d\n", reverse_num_rec(23784, 0));

    printf("Address of last %dth word: %p\n", 4, find_nth_last(mySt, 4));
    printf("Address of first %dth word: %p\n", 4, find_nth_first(mySt, 4));
    char co_and_rev[100];
    copy_and_reverse(find_nth_first(mySt, 4), find_nth_last(mySt, 4), co_and_rev);

    return 0;
}