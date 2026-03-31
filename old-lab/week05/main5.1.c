#include <stdio.h>

void print_array(int arr[], int size) {
    printf("{"); 
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}


void print_float_array(float arr[], int size) {
    printf("{"); 
    for (int i = 0; i < size; i++) {
        printf("%.2f", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}


float find_max_temperature(float temps[7]) {
    float max = temps[0];
    for (int i = 0; i < 7; i++) {
        if (temps[i] > max) {
            max = temps[i];
        }
    } return max;
}


void array_copy_reverse(int source[], int dest[], int size) {
    // input olarak source[] alıcak içi dolu liste
    // bu listenin size'ını alıcak
    // dest[]; boş liste inputu alıcak. en son doldurcaz

    for (int i = 0; i < size; i++) {
        dest[size - 1 - i] = source[i];
    } printf("dest = "); 

    print_array(dest, size);
}


int find_second_minimum(int arr[], int size) {
    int min = arr[0];
    int second = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            second = min;
            min = arr[i];
        } else if (min < arr[i] && second > arr[i]) {
            second = arr[i];
        }
    } return second;
}


int count_even_numbers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    } return count;

}


void replace_negative_values(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    } print_array(arr, size);
}


void shift_right(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    } arr[0] = last;
    print_array(arr, size);
}


void shift_left(int arr[], int size) {
    int first = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    } arr[size - 1] = first;
    print_array(arr, size);
}


void merge_two_arrays(int arr1[], int arr2[], int merged[], int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    } for (int j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    } print_array(merged, size1 + size2);
}


int search_in_array(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    } return -1;
}


int compare_sales_data(float branch1[], float branch2[], int size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (branch1[i] > branch2[i]) {
            counter++;
        }
    } return counter;
}


void normalize_data(float data[], int size) {
    float max = data[0];
    for (int i = 0; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    } for (int i = 0; i < size; i++) {
        data[i] = data[i] / max;
    } print_float_array(data, size);
}



int main() {

float temps[7] = {22.5,24.0,21.8,25.3,23.9,26.1,24.7};
float max_temp = find_max_temperature(temps);
printf("%.1f\n", max_temp);


int source[] = {100,200,300,400};
int arr_size = 4;
int dest[arr_size];
array_copy_reverse(source, dest, 4);


int find_second_arr[] = {12,8,15,9,20};
int find_second_min = find_second_minimum(find_second_arr, 5);
printf("%d\n", find_second_min);


int count_even_arr[] = {3,8,5,10,12,7};
int counter_even = count_even_numbers(count_even_arr, 6);
printf("%d\n", counter_even);


int replace_arr[] = {120,-40,300,-15,90};
replace_negative_values(replace_arr, 5);


int shift_arr1[] = {1,2,3,4,5};
int shift_arr2[] = {1,2,3,4,5};
shift_right(shift_arr1, 5);
shift_left(shift_arr2, 5);


int merge_arr1[] = {5,7,9};
int merge_arr2[] = {4,6,8,10};
int merged_arr[7];
merge_two_arrays(merge_arr1, merge_arr2, merged_arr, 3, 4);


int search_arr[] = {101,204,356,478};
int s_arr = search_in_array(search_arr, 4, 356);
printf("%d\n", s_arr);


float branch1[] = {200.5, 180.0, 250.0};
float branch2[] = {190.0, 200.0, 240.0};
int branch = compare_sales_data(branch1, branch2, 3);
printf("%d\n", branch);


float norm_arr[] = {10.0, 20.0, 30.0, 40.0};
normalize_data(norm_arr, 4);


    return 0;
}