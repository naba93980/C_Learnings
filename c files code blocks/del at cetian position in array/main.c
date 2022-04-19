#include <stdlib.h>
#include <string.h>

int main()
{
    int position,index,a[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);
    //size=size-1;
    for(int i=0;i<size;i++)
    printf("%d",a[i]);
    printf("\n");
    printf("enter positon\n");
    scanf("%d",&position);
    index=position-1;
    memmove(&a[index],&a[index+1],4*(size-position));
    for(int i=0;i<size-1;i++)
    printf("%d ",a[i]);

    return 0;
}


