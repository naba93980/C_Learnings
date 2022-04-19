#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void append1();
extern void append2();
int main()
{
    int n,x,k;
    printf("Enter the size of array you want to make\n");
    scanf("%d",&k);
    int a[k];
    printf("Enter n must be less or equal to k\n");
    scanf("%d",&n);
    printf("Enter the values\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the value you want to append\n");
    scanf("%d",&x);
    if(n==k)
        append1(a,x,n);
    if(n<k)
        append2(a,x,n);

    return 0;
}
