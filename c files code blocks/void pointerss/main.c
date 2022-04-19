#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
   void *p=&n;
   printf("%d",*((int*)p));
    return 0;
}
