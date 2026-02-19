#include <stdio.h>

// Function 1: find_min_steps
int find_min_steps(int steps[7]) {
    int min = steps[0];
    for(int i=1;i<7;i++){
        if(steps[i]<min) min = steps[i];
    }
    return min;
}

// Function 2: reverse_array
void reverse_array(int arr[], int size) {
    for(int i=size-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function 3: find_first_occurrence
int find_first_occurrence(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target) return i;
    }
    return -1;
}

// Function 4: calculate_average_and_above
float calculate_average(float expenses[], int size){
    float sum = 0;
    for(int i=0;i<size;i++) sum += expenses[i];
    return sum/size;
}

int days_above_average(float expenses[], int size){
    float avg = calculate_average(expenses,size);
    int count = 0;
    for(int i=0;i<size;i++){
        if(expenses[i]>avg) count++;
    }
    return count;
}

// Function 5: count_occurrences
int count_occurrences(int arr[], int size, int value){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==value) count++;
    }
    return count;
}

// Function 6: update_grade
void update_grade(int grades[], int index, int new_value){
    grades[index]=new_value;
}

// Function 7: filter_high_usage
void filter_high_usage(float usage[], int size, float result[], int *new_size){
    float sum=0;
    for(int i=0;i<size;i++) sum+=usage[i];
    float avg = sum/size;
    int count=0;
    for(int i=0;i<size;i++){
        if(usage[i]>avg){
            result[count]=usage[i];
            count++;
        }
    }
    *new_size = count;
}

// Function 8: detect_streak
int detect_streak(int scores[], int size){
    for(int i=0;i<size-2;i++){
        if(scores[i]<scores[i+1] && scores[i+1]<scores[i+2]) return 1;
    }
    return 0;
}

// Function 9: arrays_equal
int arrays_equal(int arr1[], int arr2[], int size){
    for(int i=0;i<size;i++){
        if(arr1[i]!=arr2[i]) return 0;
    }
    return 1;
}

// Function 10: clean_invalid_data
int clean_invalid_data(int data[], int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(data[i]!=-999){
            data[j]=data[i];
            j++;
        }
    }
    return j; // new size
}

// Main function
int main() {
    // Function 1
    int steps[7];
    printf("Enter 7 daily step counts: ");
    for(int i=0;i<7;i++) scanf("%d",&steps[i]);
    printf("Min steps: %d\n", find_min_steps(steps));

    // Function 2
    int temps[7];
    printf("Enter 7 daily temperatures: ");
    for(int i=0;i<7;i++) scanf("%d",&temps[i]);
    printf("Reversed temps: ");
    reverse_array(temps,7);

    // Function 3
    int size3;
    printf("Enter number of products: ");
    scanf("%d",&size3);
    int products[size3];
    printf("Enter product IDs: ");
    for(int i=0;i<size3;i++) scanf("%d",&products[i]);
    int target;
    printf("Enter product ID to find: ");
    scanf("%d",&target);
    printf("First occurrence of %d: %d\n", target, find_first_occurrence(products,size3,target));

    // Function 4
    int size4;
    printf("Enter number of expense records: ");
    scanf("%d",&size4);
    float expenses[size4];
    printf("Enter expenses: ");
    for(int i=0;i<size4;i++) scanf("%f",&expenses[i]);
    float avg = calculate_average(expenses,size4);
    int above = days_above_average(expenses,size4);
    printf("Average expense: %.2f, Days above average: %d\n", avg, above);

    // Function 5
    int size5,val;
    printf("Enter number of failure records: ");
    scanf("%d",&size5);
    int failures[size5];
    printf("Enter failure counts: ");
    for(int i=0;i<size5;i++) scanf("%d",&failures[i]);
    printf("Enter failure count to search: ");
    scanf("%d",&val);
    printf("Number of occurrences of %d: %d\n", val, count_occurrences(failures,size5,val));

    // Function 6
    int size6,index,new_grade;
    printf("Enter number of grades: ");
    scanf("%d",&size6);
    int grades[size6];
    printf("Enter grades: ");
    for(int i=0;i<size6;i++) scanf("%d",&grades[i]);
    printf("Enter index to update (0-based): ");
    scanf("%d",&index);
    printf("Enter new grade: ");
    scanf("%d",&new_grade);
    update_grade(grades,index,new_grade);
    printf("Updated grades: ");
    for(int i=0;i<size6;i++) printf("%d ",grades[i]);
    printf("\n");

    // Function 7
    int size7;
    printf("Enter number of usage records: ");
    scanf("%d",&size7);
    float usage[size7], result[size7];
    printf("Enter usage values: ");
    for(int i=0;i<size7;i++) scanf("%f",&usage[i]);
    int new_size;
    filter_high_usage(usage,size7,result,&new_size);
    printf("Above-average usage: ");
    for(int i=0;i<new_size;i++) printf("%.1f ", result[i]);
    printf("\n");

    // Function 8
    int size8;
    printf("Enter number of score records: ");
    scanf("%d",&size8);
    int scores[size8];
    printf("Enter scores: ");
    for(int i=0;i<size8;i++) scanf("%d",&scores[i]);
    printf("3-day increasing streak exists? %d\n", detect_streak(scores,size8));

    // Function 9
    int size9;
    printf("Enter size of arrays to compare: ");
    scanf("%d",&size9);
    int arr1[size9], arr2[size9];
    printf("Enter first array: ");
    for(int i=0;i<size9;i++) scanf("%d",&arr1[i]);
    printf("Enter second array: ");
    for(int i=0;i<size9;i++) scanf("%d",&arr2[i]);
    printf("Arrays equal? %d\n", arrays_equal(arr1,arr2,size9));

    // Function 10
    int size10;
    printf("Enter number of sensor readings: ");
    scanf("%d",&size10);
    int data[size10];
    printf("Enter readings (-999 for invalid): ");
    for(int i=0;i<size10;i++) scanf("%d",&data[i]);
    int new_data_size = clean_invalid_data(data,size10);
    printf("Cleaned data: ");
    for(int i=0;i<new_data_size;i++) printf("%d ",data[i]);
    printf("\nNew size: %d\n", new_data_size);

    return 0;
}
