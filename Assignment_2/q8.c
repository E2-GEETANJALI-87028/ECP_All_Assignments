#include<stdio.h>
int main()
{
	float quantity, discount;
	printf("Enter total quantities :\n");
	scanf("%f",&quantity);

	float totalq = (quantity * 5);

	if(quantity >=30){
		discount = ((10.0/100) * totalq);
		printf("Total price of %.2f quantites : %.2f\n ",quantity,totalq);
		printf("Total Discount is : %.2f\n",discount);
		}
	else if(quantity >=50){
		discount = ((15.0/100) * totalq);
		printf("Total price of %.2f quantites : %.2f\n ",quantity,totalq);
		printf("Total Discount is : %.2f\n",discount);
		}
	else
	 	printf("Please enter valid input\n");

		return 0;

}
