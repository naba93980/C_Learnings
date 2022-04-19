#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,flag=0;
    printf("enter n");
    scanf("%d",&n);
    if(n==1)
        printf("neither prime nor composite");
    else
    {
        for(int i=2; i<n; i++)//braces not required if there is only 'if' after for bcoz entire if() statements; is one statement ...although better to use.
            if(n%i==0)
            {
                flag=1;
                printf("%d",i);
                break;
            }
        if (flag==1)
            printf("its non prime");
        else
            printf("its prime");
    }
    return 0;
}
