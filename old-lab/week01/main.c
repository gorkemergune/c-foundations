#include <stdio.h>

// Function 1 - return türü float olduğu için başa float yazdık, eğer return atmasaydık void ile tanımlicaktık.
float calculate_subtotal(float ticket_price, int quantity) {
    return ticket_price * quantity;
}

// Function 2
float apply_discount(float subtotal, float discount_percentage) {
    return subtotal * discount_percentage / 100;
}

// Function 3
float calculate_vat(float subtotal) {
    return subtotal * 0.20;
}

// Function 4
float calculate_service_fee(int quantity) {
    return quantity * 5.0;
}

// Function 5
float calculate_total_bill(float subtotal, float discount_amount, float vat_amount, float service_fee) {
    return subtotal - discount_amount + vat_amount + service_fee;
}

int main(){
    float discount_percentage;
    float ticket_price;
    int quantity;

    printf("Enter discount percentage: ");
    scanf("%f", &discount_percentage);

    printf("Enter ticket price: ");
    scanf("%f", &ticket_price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    float subtotal = calculate_subtotal(ticket_price, quantity);
    float discount_amount = apply_discount(subtotal, discount_percentage);
    float vat_amount = calculate_vat(subtotal);
    float service_fee = calculate_service_fee(quantity);
    float total_bill = calculate_total_bill(subtotal, discount_amount, vat_amount, service_fee);

    printf("Total bill: %.2f\n", total_bill);

    return 0;
}

// gcc -o main main.c && ./main && rm main