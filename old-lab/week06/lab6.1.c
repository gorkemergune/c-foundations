#include <stdio.h>


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    } printf("\n");
}


void arr_sum(int array1[], int array2[], int size) {
    int result_arr[size];
    for (int i = 0; i < size; i++) {
        if (array2[i] > array1[i]) {
            result_arr[i] = array2[i];
        } else if (array1[i] > array2[i]) {
            result_arr[i] = array1[i] + array2[i];
        }
    } print_array(result_arr, size);
    printf("\n");
}


void divisible_three(int arr[], int size) {
    int n;
    for (int i = 0; i < size; i++) {
        n = arr[i] - ((arr[i] / 10) * 10);
        if (n == 5 || n == 0) {
            printf("%d ", arr[i]);
        }
    } printf("\n");
}


void word_search(char sentence[]) {
    printf("%s\n", sentence);
        int size = 0;
        for (int i = 0; sentence[i] != '\0'; i++) {
            size++;
        }
        char word[20];
        printf("Enter a word to search: "); scanf("%s", word);
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (sentence[i] == word[0]) {
                int j;
                for (j = 0; word[j] != '\0'; j++) {
                    if (sentence[i + j] != word[j]) {
                        break;
                    }
                }
                if (word[j] == '\0') {
                    count++;
                }
            }
        }
        printf("The word '%s' is found %d times in the sentence.\n", word, count);




}



void welcome() {
    int arr1[5] = {1, 8, 9, 12, 56};
    int arr2[5] = {9, 4, 2, 86, 2};
    int div_arr[5] = {15, 10, 11, 86, 58};
    char sentence[] = "hello Im Gorkem"; // size 13

    int wh = 1;
    int choose;
    while (wh == 1) {
        printf("Welcome to Labwork 6 Machine! By using this machine you can do: \n1. Array Summation\n2. Divisible by 5\n3. Word Search\n4. Exit\nMake your choice: "); scanf("%d", &choose);

        if (choose == 1) {
            arr_sum(arr1, arr2, 5);
        } else if (choose == 2) {
            divisible_three(div_arr, 5);
        } else if (choose == 3) {
            word_search(sentence);
        } else if (choose == 4) {
            break;
        } else {
            welcome();
        }
    }

}



int main() {

    welcome();


    return 0;
}