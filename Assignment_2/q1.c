#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter n1\n");
	scanf("%d",&n1);

	printf("Enter n2");
	scanf("%d",&n2);

	if(n2 == 0)

		printf("ERROR : Divide by number other than zero\n");

	else

		printf("Division = %d", n1/n2);

		return 0;
}
