#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=1,sum,i;
    for(; n<10000; n++)
    {   sum=0;

        for(i=1; i<n; i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(sum==n)
            printf("%d  ",n);

    }

    return 0;
}
