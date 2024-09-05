#include<stdio.h>
int main()

//Using If-else 
/*{
	int num1 , num2;

	printf("Enter num1 : \n");
	scanf("%d",&num1);

	printf("Enter num2 : \n");
	scanf("%d",&num2);

	if(num1 > num2)
		printf("Num 1 is greater \n");
	else
		printf("Num 2 is greater\n");

		return 0;
}*/

//Using Conditional Operator

 {
    int N1, N2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &N1, &N2);
    
    int max = (N1 > N2) ? N1 : N2;
    printf("The maximum is %d\n",max);
    
    return 0;
}

