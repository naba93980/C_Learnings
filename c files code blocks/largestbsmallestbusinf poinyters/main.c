#include <stdio.h>
#include <stdlib.h>
void maxmin(int *x,int size, int*max, int*min)
{
    *max=*min=*x;
    for(int i=1;i<size;i++)
    {
      if(x[i]>*max)
            *max=x[i];
      if(x[i]<*min)
            *min=x[i];
    }
}
int main()
{
    int a[]={45,56,34,799,46,789,645};
    int length=sizeof(a)/sizeof(a[0]);
    int maximum,minimum;
    maxmin(a,length,&maximum,&minimum);
    printf("%d, %d",maximum,minimum);
    return 0;
}
