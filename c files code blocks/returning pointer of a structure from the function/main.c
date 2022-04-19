#include <stdio.h>
#include <stdlib.h>
struct no
{
int x;
int y;
};

struct no *input()
{
struct no *p=(struct no*)malloc(sizeof(struct no));
p->x=5;
p->y=100;
return p;
}

void print(struct no* p)
{
    printf("%d  %d",p->x,p->y);
}

int main()
{
    struct no *ptr=input();
    print(ptr);
    return 0;
}
