#include <stdio.h>

int main() {
    int grid[3][4];
    int count = 1;

    // Fill the 3x4 grid with numbers 1 to 12
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 4; j++)
            grid[i][j] = count++;

    int *ptr = &grid[0][0];     // Pointer to first element
    int *row2 = &grid[1][0];    // Pointer to first element of second row

    // Access specific elements using pointer arithmetic and indexing
    printf("Access via ptr arithmetic:\n");
    printf("%d ", *(ptr + 5));   // 6
    printf("%d\n", ptr[7]);      // 8

    printf("Access via row2 pointer:\n");
    printf("%d ", *(row2 + 1));  // 6
    printf("%d ", row2[-1]);     // 4
    printf("%d\n", row2[2]);     // 7

    // Scan for numbers divisible by 3 using moving pointer
    printf("Numbers divisible by 3:\n");
    for(int *p = &grid[0][0]; p <= &grid[2][3]; p++) {
        if(*p % 3 == 0)
            printf("%d ", *p);
    }
    printf("\n");

    // Access last element using a different method
    printf("Last element of grid: %d\n", grid[2][3]);

    return 0;
}
