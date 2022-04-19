#include <stdio.h>
#include <stdlib.h>

int main()
 {

    int v[][2]={1,2,3,4};
    printf("%d,%d\n",v,**(v+1));
   int a[5]={19,2,3,4,5,6};
    int (*p)[5]=&a;
    printf("%d ,%d ,%d",p,*p,**p);

    return 0;
}
