#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  
    printf("Data type              Size Format Specifier Range\n");

    printf("_______________________________________________________\n");


    printf("float                  %2zu   %%f              %.10e to %.10e\n",
           sizeof(float), FLT_MIN, FLT_MAX);

    printf("double                 %2zu   %%lf             %.10e to %.10e\n",
           sizeof(double), DBL_MIN, DBL_MAX);

    printf("long double            %2zu   %%Lf             %.10Le to %.10Le\n",
           sizeof(long double), LDBL_MIN, LDBL_MAX);

return 0;
}
