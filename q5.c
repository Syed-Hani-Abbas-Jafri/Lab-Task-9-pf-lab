#include <stdio.h>

// Function to calculate restaurant bill
float calculateBill(float foodCost, int numPeople) {
    if (foodCost <= 0 || numPeople <= 0) {
        printf("Invalid input. Please enter positive values.\n");
        return 0;
    }

    float tax = 0.08 * foodCost;
    float tip = (foodCost > 50) ? 0.15 * foodCost : 0.10 * foodCost;
    float service = (numPeople > 6) ? 0.05 * foodCost : 0.0;

    float total = foodCost + tax + tip + service;

    printf("\n--- BILL DETAILS ---\n");
    printf("Food Cost:      $%.2f\n", foodCost);
    printf("Tax (8%%):        $%.2f\n", tax);
    printf("Tip:            $%.2f\n", tip);
    if (numPeople > 6)
        printf("Service (5%%):   $%.2f\n", service);
    printf("-----------------------\n");
    printf("Total Bill:     $%.2f\n", total);

    return total;
}

int main() {
    float cost;
    int people;

    printf("Enter food cost and number of people: ");
    scanf("%f %d", &cost, &people);

    calculateBill(cost, people);

    return 0;
}
