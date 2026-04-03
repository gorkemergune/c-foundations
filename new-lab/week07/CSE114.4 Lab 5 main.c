#include <stdio.h>
#define SIZE 5


void print_array(int arr[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            printf("%d, ", arr[i]);
        } else if (i == size - 1) {
            printf("%d", arr[i]);
        }
    }printf("}\n");
} 



void example1_shadow_copy(int A[], int B[], int size) {
    for (int i = 0; i < size; i++) {
        B[i] = A[i];
    } print_array(B, SIZE);
}



void foo_v1(int A[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += A[i] * A[i];
    } printf("Sum of squares: %d\n", sum);
}
void foo_v2(int B[], int size) {
    print_array(B, SIZE);
}
void example2_change_or_protect(int A[], int B[], int size) {
    foo_v1(A, size);
    foo_v2(B, size);
}



void example3_search_report(int A[], int n, int size) {
    for (int i = 0; i < size; i++) {
        if (A[i] == n) {
            printf("Full array index: %d\n", i);
        }
    } for (int i = 0; i < size / 2; i++) {
        if (A[i] == n) {
            printf("First half exits\n");
        }
    } for (int i = size; i > size / 2; i--) {
        if (A[i] == n) {
            printf("Second half exits\n");
        }   
    }
}



void example4_first_occurrence_finder(int A[], int n, int size) {
    int i = 0;
    int state = -1;
    while (i < size) {
        if (A[i] == n) {
            state = i;
            break;
        } 
    i++;
    } if (state != -1) {
        printf("index: %d\n", state);
    } else {
        printf("index: %d\n", state);
    }
}



void example5_direct_unique_printer(int A[], int size) {
    int bos[size];
    int s = 0;
    for (int i = 0; i < size; i++) {
        int found = 0;
        for (int j = 0; j < s; j++) {
            if (A[i] == bos[j]) {
                found = 1;
                break;
            }
        } if (!found) {
            bos[s] = A[i];
            s++;
        }
    } print_array(bos, size);
} 
    


void example6_broken_array_snapshot() {
    int A[5] = {5, 10, -5};
    int B[4] = {5, 10, -5, 4};
    int C[5] = {0};
    printf("# of members of A: %d\n", sizeof(A) / sizeof(A[0]));
    printf("# of members of B: %d\n", sizeof(B) / sizeof(B[0]));
    print_array(A, sizeof(A) / sizeof(A[0]));
    print_array(B, sizeof(B) / sizeof(B[0]));
    print_array(C, sizeof(C) / sizeof(C[0]));
}



void example7_broken_reverse_echo(int dest[], const int src[], int size) {
    int i, j;
    for (i = 0, j = size - 1; i <= size; i++, j++) {
        dest[i] = src[j];
    } print_array(dest, size);
}



void example8_broken_min_max_messenger(int A[], int size, int Results[]) {
    int i;
        if(A[0] < A[1]) {
            Results[0] = A[1];
            Results[1] = A[0];
        } else {
            Results[0] = A[1];
            Results[1] = A[0];
        }
        i = 2;
        while(i <= size) {
            if(A[i] > Results[1]) Results[0] = A[i];
            else if(A[i] < Results[0]) Results[1] = A[i];
        i++;
     }
}


/*double foo( double m[], int size ){
    m[ 0 ] = 10.0;
    return m[ 0 ] + m[ size-1 ];
}
void example9_broken_reference_surprise(double A[], int size) {
    printf("last element: %ld", foo(A, size));
} */
    





void example10_broken_frequency_counter(int A[], int size, int n) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] = n) count++;
    } printf("count: %d", count);
}






int main()
{
    int A[5] = {1, 3, 5, 2, 7};
    int B[5];
    int AAA[SIZE] = {15, 5, 15, 5, -5};
    int n = 5;
    int APP[10] = {50, 0, 8, 50, 5, 50, 50, 8, 5, 57};
    int AMA[5] = {1, -3, 5, 2, -7};
    int Results[SIZE];
    int AR[5] = {15, 5, 15, 5, 5};


    
    example1_shadow_copy(A, B, SIZE);
    printf("\n");
    example2_change_or_protect(A, B, SIZE);
    printf("\n");
    example3_search_report(AAA, n, SIZE);
    printf("\n");
    example4_first_occurrence_finder(AAA, n, SIZE);
    printf("\n");
    example5_direct_unique_printer(APP, 10);
    printf("\n");
    example6_broken_array_snapshot();
    printf("\n");
    example7_broken_reverse_echo(A, B, SIZE);
    printf("\n");
    example8_broken_min_max_messenger(AMA, SIZE, Results);
    printf("\n");
    //example9_broken_reference_surprise(AW, SIZE);
    //printf("\n");
    example10_broken_frequency_counter(AR, SIZE, n); 
    

    return 0;
}
