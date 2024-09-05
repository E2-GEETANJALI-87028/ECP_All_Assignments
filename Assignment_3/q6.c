#include<stdio.h>
int main()
{
	int num, fact=0;
	int count=0;
	printf("Enter the number :\n");
	scanf("%d",&num);

	printf("All Factors : ");

	for(int i=1; i<num ; i++)
		{
			if(num % i == 0)
				{
				  printf("%d, ",i);
				}
}
return 0;
}
