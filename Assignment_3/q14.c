#include<stdio.h>
int main()
{
	int num , count=0;
	printf("Enter the number to check whether it is prime or not\n");
	scanf("%d",&num);

	for(int i=1 ; i<=num ; i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	if(count == 2){
		printf("Number is Prime number\n");
		}
	else{
		printf("Number is not Prime number\n");
	}
	return 0;
}
