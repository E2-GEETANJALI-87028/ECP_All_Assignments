#include<stdio.h>
#include<math.h>

int main()
{
	int base, index , result =1;

	printf("Base : \n ");
	scanf("%d",&base);
	
	printf("Index : \n ");
	scanf("%d",&index);

	for (int i = 1; i <= index; i++)
	{
        result *= base;
    }

    printf("%d^%d = %d\n", base, index, result);
}
