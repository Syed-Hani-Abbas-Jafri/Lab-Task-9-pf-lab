#include <stdio.h>

// Function to calculate total cost with shipping rules
float calculateShipping(float orderAmount, float weight) {
    float totalCost = orderAmount;

    printf("\nOrder Amount: $%.2f | Weight: %.2f kg\n", orderAmount, weight);

    if (orderAmount <= 0 || weight <= 0) {
        printf("Invalid entry — please enter positive values.\n");
        return totalCost;
    }

    if (orderAmount > 100) {
        printf("Free Shipping applied!\n");
    } else {
        if (weight < 2)
            totalCost += 10;
        else if (weight <= 5)
            totalCost += 15;
        else
            totalCost += 20;

        printf("Shipping charge applied.\n");
    }

    printf("Total Cost (including shipping): $%.2f\n", totalCost);
    return totalCost;
}

int main() {
    float orderAmount, weight;

    printf("Enter order amount and package weight (kg): ");
    scanf("%f %f", &orderAmount, &weight);

    calculateShipping(orderAmount, weight);
    return 0;
}
