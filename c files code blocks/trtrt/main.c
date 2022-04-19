#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sizeof(int[n]));
    return 0;
}
