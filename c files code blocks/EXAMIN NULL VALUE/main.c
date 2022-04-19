#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
int x;
struct node* link;
}xx;

int main()
{   xx *p=NULL;
    if(!p)  // p is null -> p is 0 -> !p is 1
    printf("%d",p);
    return 0;
}
