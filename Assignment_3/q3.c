#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int rem=0,sum=0,rev=0,digits=0,arm=0,mod;
	printf("Please enter the number :\n");
	scanf("%d",&n);

	int orig_num = n;

	printf("Operations available :\n 0.Exit\n 1.Calculate sum of digits of integer\n 2.Reverse the number\n 3.Check whether given number is numeric palindrome or not\n 4.Check whether it is Armstrong no.\n");
	printf("\n");

	int ch;
	printf("Enter your choice :\n");
	scanf("%d",&ch);


	while(ch != 0)
	{
		switch(ch)
		{	
			case 0: printf("Exited Successfully!!\n");
					break;

			case 1:
					while (n != 0) {
                    rem = n % 10;
                    sum += rem;
                    n /= 10;
                }
                printf("Sum of digits = %d\n", sum);
                break;
	
	   	    case 2: 
					while (n != 0) {
                    rem = n % 10;
                    rev = rev * 10 + rem;
                    n /= 10;
                }
                printf("Reversal of the number is = %d\n", rev);
				break;

		    case 3:	
					while (n != 0) {
                    rem = n % 10;
                    rev = rev * 10 + rem;
                    n /= 10;
                }
					if(orig_num == rev){
						printf("Number is Palindrome number\n");}
					else{
						printf("Number is not Palindrome number\n");}
					break;

			case 4:
					int temp=n;
					while(n!=0)
					{
						n=n/10;
						digits++;
					}
					while(temp !=0)
					{
						mod = temp % 10;
     				    arm += pow(mod, digits);
        				temp /= 10;
   					 }
                    if (orig_num == arm) {
                      	 printf("Number is an Armstrong number\n");
               	    } else {
                   		 printf("Number is not an Armstrong number\n");
                }
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
		}
	return 0;
	}
	}
