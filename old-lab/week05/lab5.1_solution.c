#include <stdio.h>

// Function 1: find_max_temperature
float find_max_temperature(float temps[7]){
    float max = temps[0];
    for(int i=1;i<7;i++){
        if(temps[i]>max) max = temps[i];
    }
    return max;
}

// Function 2: array_copy_reverse
void array_copy_reverse(int source[], int dest[], int size){
    for(int i=0;i<size;i++){
        dest[i] = source[size-1-i];
    }
}

// Function 3: find_second_minimum
int find_second_minimum(int arr[], int size){
    int min1 = arr[0], min2 = 2147483647;
    for(int i=1;i<size;i++){
        if(arr[i]<min1){
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i]<min2 && arr[i]!=min1){
            min2 = arr[i];
        }
    }
    return min2;
}

// Function 4: count_even_numbers
int count_even_numbers(int arr[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0) count++;
    }
    return count;
}

// Function 5: replace_negative_values
void replace_negative_values(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]<0) arr[i]=0;
    }
}

// Function 6: shift_right
void shift_right(int arr[], int size){
    int last = arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

// Function 7: merge_two_arrays
void merge_two_arrays(int arr1[], int arr2[], int merged[], int size1, int size2){
    for(int i=0;i<size1;i++) merged[i]=arr1[i];
    for(int i=0;i<size2;i++) merged[size1+i]=arr2[i];
}

// Function 8: search_in_array
int search_in_array(int arr[], int size, int value){
    for(int i=0;i<size;i++){
        if(arr[i]==value) return i;
    }
    return -1;
}

// Function 9: compare_sales_data
int compare_sales_data(float branch1[], float branch2[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(branch1[i]>branch2[i]) count++;
    }
    return count;
}

// Function 10: normalize_data
void normalize_data(float data[], int size){
    float max = data[0];
    for(int i=1;i<size;i++) if(data[i]>max) max = data[i];
    for(int i=0;i<size;i++) data[i] = data[i]/max;
}

// Main function
int main(){
    // Function 1
    float temps[7];
    printf("Enter 7 daily temperatures: ");
    for(int i=0;i<7;i++) scanf("%f",&temps[i]);
    printf("Max temperature: %.2f\n", find_max_temperature(temps));

    // Function 2
    int size2;
    printf("Enter size of source array: ");
    scanf("%d",&size2);
    int source[size2], dest[size2];
    printf("Enter source array elements: ");
    for(int i=0;i<size2;i++) scanf("%d",&source[i]);
    array_copy_reverse(source,dest,size2);
    printf("Reversed copy: ");
    for(int i=0;i<size2;i++) printf("%d ",dest[i]);
    printf("\n");

    // Function 3
    int size3;
    printf("Enter size of defect array: ");
    scanf("%d",&size3);
    int defects[size3];
    printf("Enter defect counts: ");
    for(int i=0;i<size3;i++) scanf("%d",&defects[i]);
    printf("Second minimum: %d\n", find_second_minimum(defects,size3));

    // Function 4
    int size4;
    printf("Enter number of readings: ");
    scanf("%d",&size4);
    int readings[size4];
    printf("Enter readings: ");
    for(int i=0;i<size4;i++) scanf("%d",&readings[i]);
    printf("Number of even readings: %d\n", count_even_numbers(readings,size4));

    // Function 5
    int size5;
    printf("Enter number of transactions: ");
    scanf("%d",&size5);
    int transactions[size5];
    printf("Enter transactions: ");
    for(int i=0;i<size5;i++) scanf("%d",&transactions[i]);
    replace_negative_values(transactions,size5);
    printf("Transactions after replacing negatives: ");
    for(int i=0;i<size5;i++) printf("%d ",transactions[i]);
    printf("\n");

    // Function 6
    int size6;
    printf("Enter size of array to shift: ");
    scanf("%d",&size6);
    int shift_arr[size6];
    printf("Enter array elements: ");
    for(int i=0;i<size6;i++) scanf("%d",&shift_arr[i]);
    shift_right(shift_arr,size6);
    printf("Array after right shift: ");
    for(int i=0;i<size6;i++) printf("%d ",shift_arr[i]);
    printf("\n");

    // Function 7
    int size7a,size7b;
    printf("Enter size of first array to merge: ");
    scanf("%d",&size7a);
    int arr1[size7a];
    printf("Enter elements of first array: ");
    for(int i=0;i<size7a;i++) scanf("%d",&arr1[i]);
    printf("Enter size of second array to merge: ");
    scanf("%d",&size7b);
    int arr2[size7b];
    printf("Enter elements of second array: ");
    for(int i=0;i<size7b;i++) scanf("%d",&arr2[i]);
    int merged[size7a+size7b];
    merge_two_arrays(arr1,arr2,merged,size7a,size7b);
    printf("Merged array: ");
    for(int i=0;i<size7a+size7b;i++) printf("%d ",merged[i]);
    printf("\n");

    // Function 8
    int size8,value8;
    printf("Enter size of library array: ");
    scanf("%d",&size8);
    int library[size8];
    printf("Enter book IDs: ");
    for(int i=0;i<size8;i++) scanf("%d",&library[i]);
    printf("Enter book ID to search: ");
    scanf("%d",&value8);
    printf("Index of book: %d\n", search_in_array(library,size8,value8));

    // Function 9
    int size9;
    printf("Enter number of days of sales data: ");
    scanf("%d",&size9);
    float branch1[size9], branch2[size9];
    printf("Enter branch1 sales: ");
    for(int i=0;i<size9;i++) scanf("%f",&branch1[i]);
    printf("Enter branch2 sales: ");
    for(int i=0;i<size9;i++) scanf("%f",&branch2[i]);
    printf("Days branch1 > branch2: %d\n", compare_sales_data(branch1,branch2,size9));

    // Function 10
    int size10;
    printf("Enter number of data points to normalize: ");
    scanf("%d",&size10);
    float data[size10];
    printf("Enter data points: ");
    for(int i=0;i<size10;i++) scanf("%f",&data[i]);
    normalize_data(data,size10);
    printf("Normalized data: ");
    for(int i=0;i<size10;i++) printf("%.2f ",data[i]);
    printf("\n");

    return 0;
}
