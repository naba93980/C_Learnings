#include <stdio.h>
#include <
int main()
{
printf("Storage size for float : %d \n", sizeof(double));
printf("Minimum float positive value: %E\n", DBL_MIN );
printf("Maximum float positive value: %E\n", DBL_MAX );
printf("Precision value: %d\n", DBL_DIG );
return 0;
}
