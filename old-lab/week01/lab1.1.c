#include <stdio.h>

// Function 1: Calculate Subtotal
float calculate_subtotal(float ticket_price, int quantity) {
    return ticket_price * quantity;
}

// Function 2: Apply Discount
float apply_discount(float subtotal, float discount_percentage) {
    return subtotal * discount_percentage / 100;
}

// Function 3: Calculate VAT
float calculate_vat(float subtotal) {
    return subtotal * 0.20;
}

// Function 4: Add Service Fee
float add_service_fee(int quantity) {
    return quantity * 5.0;
}

// Function 5: Calculate Total Bill
float calculate_total_bill(float subtotal, float discount_amount, float vat_amount, float service_fee) {
    return subtotal - discount_amount + vat_amount + service_fee;
}

// Main Function
int main() {
    float discount_percentage;
    float ticket_price;
    int quantity;

    printf("Enter the ticket price: ");
    scanf("%f", &ticket_price);

    printf("Enter the ticket quantity: ");
    scanf("%d", &quantity);

    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);

    float subtotal = calculate_subtotal(ticket_price, quantity);
    float discount_amount = apply_discount(subtotal, discount_percentage);
    float vat_amount = calculate_vat(subtotal);
    float service_fee = add_service_fee(quantity);
    float total_bill = calculate_total_bill(subtotal, discount_amount, vat_amount, service_fee);

    printf("Total bill: %.2f\n", total_bill);

    return 0;
}
