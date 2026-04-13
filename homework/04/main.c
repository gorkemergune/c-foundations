#include <stdio.h>

void print_blue_nums(int total_rows, int nums_per_line) {
    for (int i = 1; i <= total_rows; i++) {
        int current_num = i;
        int step = i + 1;
        
        for (int j = 0; j < nums_per_line; j++) {
            printf("%d ", current_num);
            
            current_num = current_num + step;
            step = step * 2;
        }
        printf("\n");
    }
}



void print_blue(int row, int coloumn){
    int i = 0, j = 1, v = 0;
    while (i < row){
        int num = 1 + i;
        printf("%d ", num);
        while (j < coloumn){
            printf("%d ", num + ((2 + v) * j));
            j++;
            v++;
        }
            i++;
            v = 0;
            j = 1;
        printf("\n");
    }
}

int main() {


    print_blue_nums(5, 5);



    return 0;
}