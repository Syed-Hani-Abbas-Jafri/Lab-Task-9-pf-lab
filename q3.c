#include <stdio.h>

// Function to analyze temperature and print corresponding alert
int analyzeTemperature(float temp) {
    int code;

    printf("\nCurrent Temperature: %.1f°C\n", temp);

    if (temp > 35) {
        code = 1;
        printf("HEAT ALERT — Stay hydrated and cool!\n");
    } else if (temp < 10) {
        code = 2;
        printf("COLD ALERT — Keep warm and indoors if possible.\n");
    } else if (temp >= 15 && temp <= 25) {
        code = 3;
        printf("COMFORT ZONE — Ideal indoor temperature.\n");
    } else {
        code = 4;
        printf("NORMAL CONDITIONS — No immediate action needed.\n");
    }

    return code;
}

int main() {
    float temperature;
    printf("Enter current room temperature (°C): ");
    scanf("%f", &temperature);

    int alertCode = analyzeTemperature(temperature);
    printf("Alert Code: %d\n", alertCode);

    return 0;
}
