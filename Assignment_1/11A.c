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

