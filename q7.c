#include <stdio.h>

// Function to calculate car rental cost
float calculateRentalCost(int days, float kmDriven) {
    if (days <= 0 || kmDriven < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    float baseCost = days * 40.0;
    float allowedKm = days * 100.0;

    float extraKm = (kmDriven > allowedKm) ? (kmDriven - allowedKm) : 0.0;
    float extraCharge = extraKm * 0.25;

    float totalCost = baseCost + extraCharge;

    if (days >= 7) {
        totalCost *= 0.90; // Apply 10% discount
        printf("Long-term discount applied!\n");
    }

    printf("\n--- RENTAL SUMMARY ---\n");
    printf("Days Rented:     %d\n", days);
    printf("Kilometers Driven: %.2f km\n", kmDriven);
    printf("Base Cost:       $%.2f\n", baseCost);
    printf("Extra Charge:    $%.2f\n", extraCharge);
    printf("Total Cost:      $%.2f\n", totalCost);

    return totalCost;
}

int main() {
    int days;
    float km;

    printf("Enter number of rental days and kilometers driven: ");
    scanf("%d %f", &days, &km);

    calculateRentalCost(days, km);

    return 0;
}
