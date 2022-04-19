#include <stdio.h>
#include <stdlib.h>  /*while(b!=0)
                        { sum=a^b;
                          carry=(a&b)<<1;
                          a=sum;
                          b=carry;
                        }*/

int main()
{
    int a=7,b=7;
    printf("%d",a^b);
    return 0;
}
