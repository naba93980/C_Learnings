#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int j=0;
    for(int i=0;i<10;i++)
    {
        if (a[j]%2!=0)
            {
            a[j]=a[j]+1;
            printf("%d",a[j]);
            a[j++];

            }

        else
            {
            a[j]=a[j]-1;
            printf("%d",a[j]);
            a[j++];

            }
    }
}
