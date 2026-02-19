#include <stdio.h>



struct Car{
    char brand[30];
    char model[30];
    int year;
};


int main() {

    FILE *fptr, *fptr1, *fptr2, *fptr3;

    fptr = fopen("input.txt", "w");
    fprintf(fptr, "Hello, World!\n");
    fclose(fptr);

    fptr1 = fopen("input.txt", "a");
    fprintf(fptr1, "DAY 9.\n");
    fprintf(fptr1, "GORKEMMM.\n");
    fclose(fptr1);

    fptr2 = fopen("input.txt", "r");
    char mystr[100];
    fgets(mystr, sizeof(mystr), fptr2);
    printf("%s", mystr);
    fclose(fptr2);
    
    fptr3 = fopen("input.txt", "w");
    fprintf(fptr3, "NEW CONTENT.\n");
    fclose(fptr3);

    fptr1 = fopen("input.txt", "a");
    fprintf(fptr1, "DAY 9.\n");
    fprintf(fptr1, "GORKEMMM.\n");
    fclose(fptr1);

    fptr2 = fopen("input.txt", "r");
    char mystr1[50];
    fgets(mystr1, sizeof(mystr1), fptr2);
    printf("%s", mystr1);
    fclose(fptr2);

    /*  When we use "w" mode, it delete the previous content and create a new file with the same name.
        When we use "a" mode, it appends the new content to the end of the file without deleting the previous content.
        When we us "r" mode, it reads the content of the file.    */


    struct Car car1 = {"Toyota", "Corolla", 2020}; // Create car records = dictionary
    struct Car car2 = {"Honda", "Civic", 2019}; 
    struct Car car3 = {"Ford", "Mustang", 2021};
    FILE *carFile = fopen("cars.json", "wb");
    fwrite(&car1, sizeof(struct Car), 1, carFile);
    fwrite(&car2, sizeof(struct Car), 1, carFile);
    fwrite(&car3, sizeof(struct Car), 1, carFile);
    fclose(carFile);

    struct Car readCar;
        carFile = fopen("cars.json", "rb"); // Open the file in binary read mode     
    while (fread(&readCar, sizeof(struct Car), 1, carFile)) { // Read each car record
        printf("Brand: %s, Model: %s, Year: %d\n", readCar.brand, readCar.model, readCar.year); // Display car details
    }
    fclose(carFile);

    return 0;

}