
#include<stdio.h>

int main()
{
	int n1 , n2, n3;

	printf("Enter number 1 : \n");
	scanf("%d",&n1);

	printf("Enter number 2 : \n");
	scanf("%d",&n2);

	printf("Enter number 3 : \n");
	scanf("%d",&n3);

/*
	//using if else

	if(n1>n2 && n1>n3)

		{printf("Number 1 is greater\n");}

			else if (n2>n3){
				
				printf("Number 2 is greater\n");}

					else{
						printf("Number 3 is greater\n");}
*/


	//using conditional operator

    int max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("The maximum no is :  %d\n", max);

    return 0;
}

