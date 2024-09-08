#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int coef;

    for (int i = 0; i < rows; i++) {
        for (int space = 1; space < rows - i; space++) {
            printf("  ");
        }

        coef = 1; // Initial coefficient for each row
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }

        printf("\n");
    }

    return 0;
}
