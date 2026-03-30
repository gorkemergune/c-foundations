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



    return 0;
}