#include<stdio.h>
int main()
{
	int i=1,num;
	printf("Enter the number :\n");
	scanf("%d",&num);

	while(i<=10)
	{
		int mul = num*i;
		printf("%d * %d = %d\n", num, i, mul);
		i++;
	}
	return 0;
}
