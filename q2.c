#include <stdio.h>

// Function to determine academic standing
float evaluateStudent(float s1, float s2, float s3) {
    float avg = (s1 + s2 + s3) / 3.0;
    printf("\nAverage Marks: %.2f\n", avg);

    // Check for invalid entries
    if (s1 < 0 || s2 < 0 || s3 < 0 || s1 > 100 || s2 > 100 || s3 > 100) {
        printf("Invalid marks entered. Please use the 0–100 range.\n");
        return avg;
    }

    // Decision logic
    if (avg >= 50 && s1 >= 40 && s2 >= 40 && s3 >= 40) {
        printf("PASS — Well done!\n");
    } else {
        printf("FAIL — ");
        if (avg < 50)
            printf("Average below 50.\n");
        else
            printf("One or more subjects below 40.\n");
    }

    return avg;
}

int main() {
    float sub1, sub2, sub3;

    printf("Enter marks for 3 subjects (0–100): ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    evaluateStudent(sub1, sub2, sub3);

    return 0;
}
