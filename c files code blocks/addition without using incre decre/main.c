#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter x,y\n");
    scanf("%d  %d",&x,&y);
    if(y>0)
{     while(y!=0)
    {
        x++;
        y--;
    }
}
 else
    while(y!=0)
    {
        x--;
        y++;
    }
    printf("%d",x);
    return 0;
}
