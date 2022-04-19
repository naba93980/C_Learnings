#include <stdio.h>
#include <stdlib.h>

struct id{
int roll;
int sec;
}a={.roll=10,.sec=10},b={.roll=20,.sec=20};

struct id modify(struct id x)
{
    x.roll++;
    x.sec++;
    return x;
}

void print(struct id y)
{
    printf("%d %d\n",y.roll,y.sec);
}
int main()
{
    a=modify(a);
    b=modify(b);
    print(a);
    print(b);
    return 0;
}
