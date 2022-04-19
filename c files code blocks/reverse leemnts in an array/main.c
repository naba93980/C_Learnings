#include <stdio.h>
#include <stdlib.h>

int main()
{  int a[]={1,2,3};
   printf("%d\n",a);
   int *i=a;
   printf("%d\n",i);
   printf("%d \n",a+1);
   i++;
   printf("%d\n",i);
   int x;
   scanf("%d",&x);
   int arr[x];
   for(int *i=arr;i<(arr+x);i++)
   {
       scanf("%d",i);
   }
   printf("after reverse\n");
    for(int *i=(arr+(x-1));i>=arr;i--)
    {
        printf("%d ",*i);
    }

    return 0;
}
