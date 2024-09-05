#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z')) {
        printf("It is a Uppercase letter\n");
    }
	else if ((c >= 'a' && c <= 'z')) {
        printf("It is a Lowercase letter\n");
    }
	else if ((c >= '0' && c <= '9')) {
        printf("It is a Digit\n");
    }
	else if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
        printf(" It is a space, tab, carriage return, or new line\n");
    }
	else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        printf("It is a Alphabet\n");
    }
	else {
        printf("OTHER : it is not listed above\n");
    }

    return 0;
}
