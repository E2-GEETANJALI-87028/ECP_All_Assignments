#include <stdio.h>

int main() {
    int year, month;

    printf("Enter year: \n");
    scanf("%d", &year);

    printf("Enter month (1 - 12): \n");
    scanf("%d", &month);

    switch (month) {
        case 1: 
            printf("January has 31 days\n");
            break;
        case 2:  
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("February has 29 days (leap year)\n");
            } else {
                printf("February has 28 days\n");
            }
            break;
        case 3: 
            printf("March has 31 days\n");
            break;
        case 4:  
            printf("April has 30 days\n");
            break;
        case 5:
            printf("May has 31 days\n");
            break;
        case 6:  
            printf("June has 30 days\n");
            break;
        case 7:  
            printf("July has 31 days\n");
            break;
        case 8:
            printf("August has 31 days\n");
            break;
        case 9:  
            printf("September has 30 days\n");
            break;
        case 10: 
            printf("October has 31 days\n");
            break;
        case 11: 
            printf("November has 30 days\n");
            break;
        case 12:
            printf("December has 31 days\n");
            break;
        default:
            printf("Invalid month. Please enter a value between 1 and 12.\n");
            return 0;
    }

    return 0;
}
