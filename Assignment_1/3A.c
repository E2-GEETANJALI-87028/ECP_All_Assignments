#include<stdio.h>
int main()
{
	char ch;

	printf("Enter the character : ");
	scanf("%c",&ch);

	printf("Entered Character is : %c\n",ch);
	
	printf("Character in decimal : %d\n",ch);

	printf("Character in hex : %x\n",ch);

	printf("Character in octal : %o\n",ch);

	return 0;
}
