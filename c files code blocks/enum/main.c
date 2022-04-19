#include <stdio.h>
#include <stdlib.h>
/*struct{
int x;
int y;
}var1;
struct{
int x;
int y;
}var2;*/

enum marks
{
    jan=6,feb=28,march
} ;



int main()
{
    enum state
    {
        failed=0,
        working=1,
        hanged=(int)3.5 //as all enum  values has to be integer
    };
    enum state bulb;
    bulb=hanged;
    enum marks month;
    month=jan;
    printf("%d\n%d",month,bulb);
    return 0;
}
