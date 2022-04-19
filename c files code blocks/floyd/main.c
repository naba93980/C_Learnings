#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,z=1;
    printf("enter n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for( j=1; j<=i; j++)
        {
            printf("%d ",z++);
        }
        printf("\n");
    }

    return 0;
}
