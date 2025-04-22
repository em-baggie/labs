#include <stdio.h>

int main(void) {
    int grid[5][5] = {0};
    int totalr[5] = {0};
    int totalc[5] = {0};
    
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", (i + 1));
        for (int j = 0; j < 5; j++) {
            scanf("%d", &grid[i][j]);
            totalr[i] += grid[i][j];
            totalc[j] += grid[i][j];
            }
        }
    printf("Row totals: %d %d %d %d %d\n", totalr[0], totalr[1], totalr[2], totalr[3], totalr[4]);
    printf("Column totals: %d %d %d %d %d\n", totalc[0], totalc[1], totalc[2], totalc[3], totalc[4]);
}