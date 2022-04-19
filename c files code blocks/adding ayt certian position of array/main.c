#include<stdio.h>
#include<string.h>

int main()
{
    int a[8];
    int n, position,data;
    printf("enter elements u want in array");
    scanf("%d",&n);
    printf("enter array\n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("enter position\n");
    scanf("%d",&position);
    printf("enter new data\n");
    scanf("%d", &data);
    if(n<8) {
        memmove(a+position,a+(position-1),4*(n-(position-1)));
        a[position-1]=data;
        printf("the new array\n");
        for(int i=0; i<=n; i++)
            printf("%d\n",a[i]);
    }
    else if (n==8) {
        int b[9];
        memmove(b,a,4*(position-1));
        memmove(b+position,a+(position-1),4*(n-(position-1)));
        b[position-1]=data;
        printf("the new array\n");
        for(int i=0; i<=n; i++)
            printf("%d\n",b[i]);
    }
    return 0;
}
