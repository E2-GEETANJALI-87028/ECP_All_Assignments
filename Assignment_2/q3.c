#include<stdio.h>
int main()
{
	int num;

	printf("Enter number\n");
	scanf("%d",&num);

	if(num>0)

	printf("Number is Positive\n");
		
		else if(num<0)
		
			printf("Number is Negative\n");

	     		else
		     		printf("Number is Zero\n");

	return 0;
}
