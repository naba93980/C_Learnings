#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addbeg1(int *a, int n,int data)
{
    memmove(a+1,a,n*4);
    a[0]=data;
    printf("The new array \n");
    for(int i=0; i<=n; i++)
    {
        printf("%d\n",a[i]);
    }
}
void addbeg2(int *a, int n,int data)
{
    int b[n+1];
    memmove(&b[1],a,n*4);
    b[0]=data;
    printf("The new array\n");
    for(int i=0; i<=n; i++)
    {
        printf("%d\n",b[i]);
    }
}
int main()
{
    int x,n,data;
    printf("Enter array size\n");
    scanf("%d",&x);
    int a[x];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    if(n>x)
    {
        printf("thik se dal bhsdk");
        return 0;
    }
    printf("Enter the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter new value\n");
    scanf("%d",&data);
    if(n<x)
    {
        addbeg1(a,n,data);
    }
    else if(n==x)
    {
        addbeg2(a,n,data);
    }

    return 0;
}
