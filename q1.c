#include <stdio.h>

// Function to process a transaction
float processTransaction(float remainingLimit, float transactionAmount) {
    printf("\nAttempting transaction of $%.2f...\n", transactionAmount);

    if (transactionAmount <= 0) {
        printf("Invalid amount entered.\n");
        return remainingLimit;
    }

    if (transactionAmount <= remainingLimit) {
        remainingLimit -= transactionAmount;
        printf("Transaction APPROVED.\n");
        printf("New remaining limit: $%.2f\n", remainingLimit);
    } else {
        printf("Transaction DECLINED — exceeds remaining limit of $%.2f.\n", remainingLimit);
    }

    return remainingLimit;
}

int main() {
    float remaining = 5000.0;
    float amount;

    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    remaining = processTransaction(remaining, amount);

    printf("\nFinal remaining limit: $%.2f\n", remaining);
    return 0;
}
