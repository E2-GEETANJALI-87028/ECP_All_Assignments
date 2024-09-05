#include<stdio.h>
int main()
{
	int num,digits=0,rem=0,rev=0;
	printf("Enter num : \n");
	scanf("%d",&num);

	int org = num;

	while(num>0)
	{
	rem = num % 10;
	digits = digits *10 + rem;
	num /=10;
	}

   if(digits == org)
    	printf("Number is Palindrome\n");

	else
		printf("Number is not Palindrome\n");

		return 0;

}
