#include<stdio.h>
int main()
{
 int year;

 printf("Enter year : \n");
 scanf("%d",&year);

//using if else
/*
if (year % 400 == 0) {
        printf("The year %d is a leap year\n", year);
    } else if (year % 100 == 0) {
        printf("The year %d is not a leap year\n", year);
    } else if (year % 4 == 0) {
        printf("The year %d is a leap year\n", year);
    } else {
        printf("The year %d is not a leap year\n", year);
    }

//using logical operators

if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("The year %d is a leap year and has 366 days.\n", year);
    } else {
        printf("The year %d is not a leap year and has 365 days.\n", year);
    }*/

//using conditional operator

printf("The year %d is %s\n", year,
        (year % 400 == 0) ? "a leap year" :
        (year % 100 == 0) ? "not a leap year" :
        (year % 4 == 0) ? "a leap year" : "not a leap year");
return 0;
}
