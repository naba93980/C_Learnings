#include <stdio.h>
#include <stdlib.h>

int additon(int a,int b)
{
    return a+b;
}
int main()
{
    int result;
    int (*ptr)(int,int)=&additon; //or  ptr=&additon;
    result= (*ptr)(10,10);
    printf("%d",result);

    return 0;
}
