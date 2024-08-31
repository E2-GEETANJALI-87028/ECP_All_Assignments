#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  
    printf("Data type              Size Format Specifier Range\n");

    printf("_______________________________________________________\n");

    printf("char                   %2zu   %%c              %d to %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);

    printf("unsigned char          %2zu   %%c              0 to %d\n",
           sizeof(unsigned char), UCHAR_MAX);

    printf("short int              %2zu   %%hd             %d to %d\n",
           sizeof(short int), SHRT_MIN, SHRT_MAX);

    printf("unsigned short int     %2zu   %%hu             0 to %d\n",
           sizeof(unsigned short int), USHRT_MAX);

    printf("int                    %2zu   %%d              %d to %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("unsigned int           %2zu   %%u              0 to %u\n",
           sizeof(unsigned int), UINT_MAX);

    printf("long int               %2zu   %%ld             %ld to %ld\n",
           sizeof(long int), LONG_MIN, LONG_MAX);

    printf("unsigned long int      %2zu   %%lu             0 to %lu\n",
           sizeof(unsigned long int), ULONG_MAX);

    printf("float                  %2zu   %%f              %.10e to %.10e\n",
           sizeof(float), FLT_MIN, FLT_MAX);

    printf("double                 %2zu   %%lf             %.10e to %.10e\n",
           sizeof(double), DBL_MIN, DBL_MAX);

    printf("long double            %2zu   %%Lf             %.10Le to %.10Le\n",
           sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}

/*
#include<stdio.h>
#include<limits.h>
int main()
{
	printf("Data type\t\t size\t\t Format Speifier\t\t Range\t\n");

	printf("char\t\t %c\t\t %%c\t\t %c to %c\t\n",sizeof(char),INT_MIN,INT_MAX);

	printf("unsigned char\t\t %c\t\t %%c\t\t %c to %c\t\n",sizeof(unsigned char),INT_MIN,INT_MAX);

	printf("short int\t\t %hd\t\t %%hd\t\t %hd to %hd\t\n",sizeof(short int),INT_MIN,INT_MAX);

	printf("unsigned short int\t\t %hu\t\t %%hu\t\t %hu to %hu\t\n",sizeof(unsigned short int),INT_MIN,INT_MAX);

	printf("int\t\t %d\t\t %%d\t\t %d to %d\t\n",sizeof(int),INT_MIN,INT_MAX);

	printf("unsigned int\t\t %u\t\t %%u\t\t %u to %u\t\n",sizeof(unsigned int),INT_MIN,INT_MAX);

	printf("long int\t\t %ld\t\t %%ld\t\t %ld to %ld\t\n",sizeof(long int),INT_MIN,INT_MAX);
	
	printf("unsigned long int\t\t %lu\t\t %%lu\t\t %lu to %lu\t\n",sizeof(unsigned long int),INT_MIN,INT_MAX);

	return 0;

	}
	*/
