#include <stdio.h>
#include <stdlib.h>
int func(int a[], int size)
{   printf("%p\n",a);
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);

    }printf("\n");
*(a+1)=8;
}
int main()
{
  int array[4]={10,20,30,6};

   printf("%d\n",array[0]);
    printf("%p\n",array);
    printf("%p\n",array+1);

   func(array,4);

   for(int z=0;z<4;z++)
   printf("%d",array[z]);
   printf("\n");
   printf("%d",array[1]);
    return 0;
}
