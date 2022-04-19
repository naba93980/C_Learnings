#include <stdio.h>
#include <stdlib.h>

void pointer(int *x)
    {

        return *x=299;
    }
int main()
{
   int a=80;
   printf("%d \n",a);
   printf("%p \n",&a);
   pointer(&a);
   printf("a= %d \n",a);
   printf("%p",&a);
   return 0;
}
