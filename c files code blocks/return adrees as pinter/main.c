#include <stdio.h>
#include <stdlib.h>
int* address(int *a)
{
    return &a[0];
}
int main()
{
    int a[]={10,20,30};
    int* z=&a[0];
    printf("%p \n",z);
    int *add=address(a);
    printf("%p",add);
    return 0;
}
