#include <stdio.h>
#include <stdlib.h>
#include<string.h>
union student
{
    int x;
    char y;
}boy,girl;

int main()
{
    boy.x=5;
    printf("%d ",boy.x);
    boy.y='g';
    printf(" %c",boy.x,boy.y);
    printf("%d",sizeof(boy));


}
