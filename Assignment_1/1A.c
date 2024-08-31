#include<stdio.h>

	int main()
{
	int num1, num2;
	unsigned char ch1= 'A',ch2 ='B';
	printf("Enter the num1 :");
	scanf("%d",&num1);

	printf("Enter the num2 :");
	scanf("%d",&num2);

	int sum = num1+num2;
	int diff = num1-num2;
	int prod = num1*num2;

	printf("Sum = %d\n",sum);
	printf("Difference = %d\n",diff);
	printf("Product = %d\n",prod);

	printf("Sum = %d\n",'A'+'B');
	printf("Difference = %d\n",'A'-'B');
	printf("Product = %d\n",'A'*'B');
	return 0;


}
