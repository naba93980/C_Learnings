#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,n,c;
    printf("enter n");
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
    c=a+b;
    a=b;
    b=c;}
    printf("%d",c);
    return 0;
}
