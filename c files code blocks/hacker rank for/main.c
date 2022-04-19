#include<stdio.h>

int main()
{
    int n;
    int a[n];
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
        sum+=a[n];
    }
    printf("%d",sum);
    return 0;
}
