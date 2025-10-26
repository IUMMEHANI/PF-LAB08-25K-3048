#include <stdio.h>
int main() {
    int a[3][3];
    int i, j, k;
    int rowMin, colMax, colIndex;
    int found = 0;
    printf("Enter elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix entered is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        rowMin = a[i][0];
        colIndex = 0;
        for (j = 1; j < 3; j++) {
            if (a[i][j] < rowMin) {
                rowMin = a[i][j];
                colIndex = j;
            }
        }
        colMax = rowMin;
        for (k = 0; k < 3; k++) {
            if (a[k][colIndex] > colMax) {
                colMax = a[k][colIndex];
            }
        }
        if (rowMin == colMax) {
            printf("\nSaddle point found at position [%d][%d] = %d\n", i, colIndex, rowMin);
            found = 1;
        }
    }
    if (!found)
        printf("\nNo saddle point found in the matrix.\n");

    return 0;
}

