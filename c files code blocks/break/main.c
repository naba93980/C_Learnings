#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n<0)
        {printf("hello");
           continue;}
        else
            printf("enter n");
        scanf("%d",&n);
    }
    return 0;
}
