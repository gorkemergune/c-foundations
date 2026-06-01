#include <stdio.h>


// writa a recursive func ---- 
void foo(int *arr1, int size1, int *arr2, int size2) {
// which does the following. Mark the first element of the arr1 as max element and pass it to arr2 then count the number of max element and pass the number of count to arr2 second element do the same thing for the second max and pass the values found to the third and fourth elements in order. Do these steps in each iteration reccursivelly. Asume that arr2 already had the max and second max with their counts.
// arr1 = 1,1,3,4,3,3,4,4,5,2,2
// arr2 = 1,2,3,3
// after iteration 1: max = 4, second max = 3, count of max = 3, count of second max = 3
// arr2 will become arr2 = 4,3,3,3
// after iteration 1: max = 5, second max = 4, count of max = 1, count of second max = 3
// arr2 will become arr2 = 5,4,1,3
// countinues like that
}

int main() {


    return 0;

}