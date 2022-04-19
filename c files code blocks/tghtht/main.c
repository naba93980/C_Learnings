#include<stdio.h>

int main()
{
    int x;
    int a[x];
    long int sum=0;

scanf("%d",&x);


    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
