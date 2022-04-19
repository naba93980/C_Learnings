#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
            printf("%c",' ');
        for(int k=1;k<=i;k++)
            printf("%c",'#');
        printf("\n");
    }
    return 0;
}
