#include<stdio.h>
#include<string.h>
int main()
{
    int a[3],n,freepos;
    printf("enter no. of digits\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    if(n==(sizeof(a)/sizeof(a[0])))
    {
        int b[n+1];
        memmove(b,a,sizeof(a));
        b[n]=45;
        for(int i=0; i<=n; i++)
            printf("%d\n",b[i]);
    }
    else if(n<(sizeof(a)/sizeof(a[0])))
    {
        freepos=n;
        a[freepos]=90;
        freepos++;
        for(int i=0; i<freepos; i++)
        {
            printf("%d\n",a[i]);
        }
    }
    else printf("bhsdk no space\n");
    printf("max space is %zu",(sizeof(a)/sizeof(a[0])));
    return 0;
}
