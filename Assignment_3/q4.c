#include<stdio.h>
int main()
{
	int num, fact=1;
	printf("Enter num :\n");
	scanf("%d",&num);

	for(int i=1; i<=num; i++)
	{	
		printf("%d * ",i);
		fact = fact*i;
	}
	printf(" = %d \n",fact);
	

	return 0;
}
