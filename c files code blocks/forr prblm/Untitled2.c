#include<stdio.h>
int main()
{
    int x=2;
    if(x==2); x=0;
    if(x==3) x++;
    else x+=20;

    printf("x=%d",x);
    return 0;
}
