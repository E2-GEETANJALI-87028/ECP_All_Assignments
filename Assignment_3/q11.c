#include<stdio.h>
int main()
{
	int num, fact=1;

	printf("Enter the number : \n");
	scanf("%d",&num);

	for(int i=1 ; i<=num ; i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d = %d\n", num , fact);
	
	return 0;
}
