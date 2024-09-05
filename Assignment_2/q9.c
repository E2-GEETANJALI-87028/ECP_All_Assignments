#include<stdio.h>
int main()
{
	//using if-else ladder

	int year;
	int month;
	int days;

	printf("Enter year : \n");
	scanf("%d",&year);

	printf("Enter month(01 - 12) : \n");
	scanf("%d", &month);
/*
	if(month == 1){
	 printf("January has 31 days\n");
	}
    else if(month == 2)
	 {
 		if((year%4==0)&&(year%100!=0)||(year%400==0))
			printf("February has 29 days\n");
		else
			printf("February has 28 days\n");
	 }
	else if(month == 3){
	 printf("March has 31 days\n");
	}
	else if(month == 4){
	 printf("April has 30 days\n");
	 }
	else if(month == 5){
	 printf("May has 31 days\n");
	 }
	else if(month == 6){
	 printf("June has 30 days\n");
	 }
	else if(month == 7){
	 printf("July has 31 days\n");
	}
	else if(month == 8){
	 printf("August has 31 days\n");
	 }
	else if(month == 9){
	 printf("September has 30 days\n");
	 }
	else if(month == 10){
	 printf("October has 31 days\n");
	}
	else if(month == 11){
	 printf("November has 30 days\n");
	 }
	else if(month == 12){
	 printf("December has 31 days\n");
	 }
	else
		printf("Please enter valid month\n");
	 return 0;
	 }
*/
	//using logical opeartors

	if (month == 2) {
       
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;  
        } 
		else {
            days = 28; 
        }
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
    }
	else if (month >= 1 && month <= 12) {
        days = 31; 
    }
	else {
        printf("Please enter valid month\n");
        return 0; 
    }

    printf("Number of days in month %d of year %d is: %d\n", month, year, days);   

	return 0;
	}
