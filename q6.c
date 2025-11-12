#include <stdio.h>

// Function to calculate tax and net income
float calculateTax(float grossIncome, float *netIncome) {
    float tax = 0.0;

    if (grossIncome <= 0) {
        printf("Invalid income entered.\n");
        *netIncome = 0;
        return 0;
    }

    if (grossIncome <= 20000)
        tax = 0;
    else if (grossIncome <= 50000)
        tax = (grossIncome - 20000) * 0.10;
    else
        tax = (30000 * 0.10) + ((grossIncome - 50000) * 0.20);

    *netIncome = grossIncome - tax;

    printf("\n--- TAX SUMMARY ---\n");
    printf("Gross Income:  $%.2f\n", grossIncome);
    printf("Tax Amount:    $%.2f\n", tax);
    printf("Net Income:    $%.2f\n", *netIncome);

    return tax;
}

int main() {
    float income, net, tax;

    printf("Enter gross income: ");
    scanf("%f", &income);

    tax = calculateTax(income, &net);

    return 0;
}
