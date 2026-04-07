// When we define func parametres, we can use them as variables in the function body.

void times1(int *a, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i] * 2);
    }
}

void times2(int a[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i] * 3);
    }
}

void times3(int a[5], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i] * 4);
    }
}


// *a , a[] , a[5] are same. They are all pointer to int. So, we can use them interchangeably in the function definition. The only difference is that a[5] is a hint to the compiler that the array has 5 elements, but it does not affect the way the function works.





int main() {

    int x[5] = {1, 2, 3, 4, 5};

    times1(x, 5);
    times2(x, 5);
    times3(x, 5);

}