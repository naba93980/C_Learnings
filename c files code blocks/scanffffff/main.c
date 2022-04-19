#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;char a[25],b[25];
    //scanf("%d,%d ,%d , %[^\n]%*c, %[^\n]%*c",&x,&y,&z,&a,&b );
    //printf("%d %d %d %s %s",x,y,z,a,b);
    scanf("%d ,%d ,%[^\n]%*c,",&x,&y,a);
    printf("%d %d %s",x,y,a);
    return 0;
}
