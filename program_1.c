#include <stdio.h>
#include <limits.h>

int main()
{

    printf("\n\n\nMaximum number of int data type is:\n%d\n", INT_MAX);
    printf("Minimum number of int data type is:\n%d\n\n\n", INT_MIN);

    printf("Maximum Number of float data type is:\n%f\n", __FLT_MAX__);
    printf("Minimum number of float data type is:\n%f\n\n\n", __FLT_MIN__);

    printf("Maximum Number of double data type is:\n%f\n", __DBL_MAX__);
    printf("Minimum number of double data type is:\n%f\n\n\n", __DBL_MIN__);

    return 0;
}