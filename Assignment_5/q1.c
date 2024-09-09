#include<stdio.h>
int main()
{
	int i, x=0, avg, subjects[5];

	printf("Enter the marks of all 5 subject\n");

	for(int i=0; i<=4; i++)
	{
		printf("Subject %d : ",i+1);
		scanf("%d",&subjects[i]);
		x = x + subjects[i];
	}
		
		avg = x/5;

		printf("Average : %d\n",avg);

return 0;
}
