#include <stdio.h>
#include <stdlib.h>
struct id
{
    int x;
    int y;
};

void print(struct id *x)
{
    printf("%d, %d\n",(x[0]).x,(x[0]).y);//or  printf("%d, %d",(*(x)).x,(*(x)).y);
    printf("%d, %d",(*(x+1)).x,(*(x+1)).y);
}

int main()
{   struct id a[2]={{10,20},{30,40}};
    print(a);

    return 0;
}
