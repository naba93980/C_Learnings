#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);
    size=size-1;
    for(int i=0;i<size;i++)
    printf("%d",a[i]);
    printf("\n");
    memmove(a,a+1,4*size);
    for(int i=0;i<size;i++)
    printf("%d",a[i]);

    return 0;
}
