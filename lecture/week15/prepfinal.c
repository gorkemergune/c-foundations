#include <stdio.h>


typedef struct {
    
    int id;
    int age;
    int salary;
    char name[20];

} workers;

void calculateAverageSalary(workers w[], int size) {
    int totalSalary = 0;
    for (int i = 0; i < size; i++) {
        totalSalary += w[i].salary;
    }
    double averageSalary = (double)totalSalary / size;
    printf("Average Salary: %.2f\n", averageSalary);
}

void printWorkerDetails(workers w) {
    printf("ID: %d\n", w.id);
    printf("Name: %s\n", w.name);
    printf("Age: %d\n", w.age);
    printf("Salary: %d\n", w.salary);
}






int main() {

    workers w1 = {1, 30, 50000, "Alice"};
    workers w2 = {2, 25, 45000, "Bob"};
    workers w3 = {3, 35, 60000, "Charlie"};
    workers w4 = {4, 28, 48000, "David"};

    workers workerArray[4] = {w1, w2, w3, w4};

    calculateAverageSalary(workerArray, 4);

    for (int i = 0; i < 4; i++) {
        printWorkerDetails(workerArray[i]);
        printf("\n");
    }


    workers w5;
    printf("Enter worker details (ID, Name, Age, Salary): ");
    scanf("%d %s %d %d", &w5.id, w5.name, &w5.age, &w5.salary);
    printWorkerDetails(w5);
    

    return 0;
}