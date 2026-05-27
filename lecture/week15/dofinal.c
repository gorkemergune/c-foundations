#include <stdio.h>

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    } printf("\n");
}

int find_three_rep(int *arr, int size) {
    int count_digit[size];
    int counter = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (arr[i] == arr[j]) counter++;
        } count_digit[i] = counter;
        counter = 0;
    }  
    print_arr(count_digit, 10);
    // count_digit[10] = {1, 3, 1, 2, 3, 1, 1, 2, 3, 1}
    int target;
    for (int c = 0; c < size; c++) {
        if (count_digit[c] == 3) return arr[c];
    } return -1;
}

int find_first_between(int *arr, int size, int target) {
    int total = 0;
    int state = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) state++;
        if (state == 1) total += arr[i];
        if (state == 2) break;
    }
    return total - target;
}


int find_second_between(int *arr, int size, int target) {
    int total = 0;
    int state = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) state++;
        if (state == 2) total += arr[i];
        if (state == 3) break;
    }
    return total - target;
}



int main() {

    int arr[10] = {1, 2, 5, 6, 2, 8, 0, 6, 2, 3};
    int target = find_three_rep(arr, 10);
    printf("First three rep: %d\n", target);
    int first = find_first_between(arr, 10, target);
    int second = find_second_between(arr, 10, target);
    int minus = first - second;
    printf("Between first: %d, between second: %d, their minus: %d\n", first, second, minus);

    return 0;
} 