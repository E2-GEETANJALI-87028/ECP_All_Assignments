#include <stdio.h>

	int main()
	{
    int num, original, rem;
    int thousands, hundreds, tens, units;
    int rev = 0;

    printf("Enter a 4-digit number\n");
    scanf("%d", &num);
    original = num;

    units = num % 10;       
    num = num / 10;
    tens = num % 10;      
    num = num / 10;
    hundreds = num % 10;     
    num = num / 10;
    thousands = num % 10;  

    printf("Face value of number:\n");
    printf("%d\t%d\t%d\t%d\n", thousands, hundreds, tens, units);

    printf("Place value of number:\n");
    printf("%d000\t%d00\t%d0\t%d\n", thousands, hundreds, tens, units);

    num = original;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reversal of number:\n");
    printf("%d\n", rev);

    return 0;
}
/*
{
	int num, digits[4],rem=0,rev=0;
    int	original;

	printf("Enter 4 digit number\n");
	scanf("%d",&num);

	original = num;

	printf("Face value of number: \n");

	for(int i=0 ; i<4 ; i++)
	{
		digits[i]=num%10;
		num = num/10;
	//	printf("%d",digits[i]);
	}
	for(int i=3 ; i>=0 ; i--)
	{
		printf("%d\t",digits[i]);
	}
	printf("\n");
	printf("Place value of number : \n");
	printf("%d000\t %d00\t %d0\t %d\n",digits[3],digits[2],digits[1],digits[0]);

	while(original!=0)
	{	
		rem =  original %10;
		rev = rev *10+ rem;
		original = original/10;
	}
	printf("Reversal of num of number :\n");
	printf("%d\n",rev);

	return 0;
}
*/
