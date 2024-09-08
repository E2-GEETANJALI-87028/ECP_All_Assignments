
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    } else if (x == 0) {
        if (y > 0) {
            printf("The point lies on the positive Y-axis.\n");
        } else {
            printf("The point lies on the negative Y-axis.\n");
        }
    } else if (y == 0) {
        if (x > 0) {
            printf("The point lies on the positive X-axis.\n");
        } else {
            printf("The point lies on the negative X-axis.\n");
        }
    } else {
        if (x > 0 && y > 0) {
            printf("The point lies in Quadrant I.\n");
        } else if (x < 0 && y > 0) {
            printf("The point lies in Quadrant II.\n");
        } else if (x < 0 && y < 0) {
            printf("The point lies in Quadrant III.\n");
        } else if (x > 0 && y < 0) {
            printf("The point lies in Quadrant IV.\n");
        }
    }

    return 0;
}
