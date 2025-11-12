#include <stdio.h>

int main() {
    // Question 9
    int a = 100, b = 200, c = 300;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    // Swap pointers
    int *temp;
    temp = p1; p1 = p2; p2 = p3; p3 = temp;

    // Modify values via pointers
    *p1 += 10;    // b = 210
    *p2 -= 20;    // c = 280
    *p3 *= 2;     // a = 200

    // Reassign pointers to different variables
    p1 = &c; p2 = &a; p3 = &b;

    // More value changes
    *p1 += 5;     // c = 285
    *p2 -= 15;    // a = 185
    *p3 *= 3;     // b = 630

    printf("Final values after pointer manipulations:\n");
    printf("a = %d\nb = %d\nc = %d\n\n", a, b, c);

return 0;
}
