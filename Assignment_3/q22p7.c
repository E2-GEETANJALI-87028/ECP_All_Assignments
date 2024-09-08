#include <stdio.h>

int main() {
    char startChar;
    int rows = 4; 

    for (int i = 0; i < rows; i++) {
        startChar = 'A' + i; 

        for (int j = 0; j < rows - i; j++) {
            printf("%c ", startChar + j);
        }
        printf("\n");
    }

    return 0;
}
