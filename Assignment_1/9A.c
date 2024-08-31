#include<stdio.h>
int main()
{
	float Fahrenheit,Celsius;

	printf("Enter Fahrenheit value : \n");
	scanf("%f",&Fahrenheit);
	
	float a= (5.0/9.0);
	float b=(Fahrenheit-32);

	Celsius =a*b;

	printf("Fahrenheit to Celsius Conversion :\n");
	printf("%2f --> %2f",Fahrenheit,Celsius);

	//printf("Celsius to Fahrenheit Conversion :\n");
	//printf("%d --> %d",Celsius,Fahrenheit);

	return 0;
}
