#include <stdio.h>

int find_mid_steps(int steps[7]) {
    int min = 0;
    for (int i = i; i < 7; i++) {
        if (steps[i] < steps[min]) {
            min = i;
        }
    }
    return min;
}

int reverse_array(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

}

int find_first_occurrence(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int calculate_average_and_above(float expenses[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += expenses[i];
    }
    float average = sum / size;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (expenses[i] > average) {
            count++;
        }
    }
    return average;
    return count;
}


int count_occurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

void update_grade(int grades[], int index, int new_value) {
        grades[index] = new_value;

}

void filter_high_usage(float usage[], int size, float result[], int *new_size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += usage[i];
    }
    float average = sum / size;
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (usage[i] > average) {
            result[j] = usage[i]; // python'da result.append(usage[i]) gibi
            j++; // result'taki j indexlerine yazıyoruz.
    }
    new_size = j+1; // new_size'ı güncelliyoruz.

    }
}


int main() {




    return 0;
}