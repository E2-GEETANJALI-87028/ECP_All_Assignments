#include <stdio.h>

int main() {
    int n = 7; // Adjust the size of the pattern here

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= (n - i) * 2; j++) {
            printf(" ");
        }

        // Print the pattern
        for (int j = i; j <= n; j++) {
            printf("%c ", 'A' + j - 1);
        }
        for (int j = n - 1; j >= i; j--) {
            printf("%c ", 'A' + j - 1);
        }

        // Print the additional space after the pattern
        printf(" ");

        printf("\n");
    }

    return 0;
}
