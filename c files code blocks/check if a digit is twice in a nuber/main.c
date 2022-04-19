#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rem,n=1234567891;
    int a[10]={0};
    while(n!=0)
    {
        rem=n%10;
        if(a[rem]!=1)
            a[rem]=1;
        else break;
        n=n/10;
    }
    if(n==0)
        printf("no match");
    if(n>0)
        printf("match found");
    return 0;
}
