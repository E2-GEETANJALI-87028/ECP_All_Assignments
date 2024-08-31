#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);

	int avg= (n1+n2+n3)/3;

	printf("Average = %d",avg);

	return 0;

	
	
}
