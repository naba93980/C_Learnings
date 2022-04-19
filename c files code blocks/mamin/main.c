#include <stdio.h>
#include <stdlib.h>
void maxmin(int *arr,int size,int *max, int*min)
{
   *max=*min=arr[0];
   for(int i=1;i<size;i++)
   {
       if(arr[i]>*max)
        *max=arr[i];
       if(arr[i]<*min)
        *min=arr[i];
   }
}
int main()
{   int array[5]={23,45,767,278,86};
    int max,min;
    maxmin(array,5,&max,&min);
    printf("%d %d",max,min);

    return 0;
}
