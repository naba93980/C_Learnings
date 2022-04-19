#include <stdio.h>
#include <stdlib.h>
int fun()
{
    static int x;
    x++;
    return x;
}
 int x;
int x=6;

int main()
{
    for(int i=0;i<5;i++)
    {
     static int x;//declaration and definition only once in the block
     x=1;//assigning
     printf("%d",x);
     x++;
    }
    printf("\n%d",fun());//ha dekhbo ager scope e zero aslo(kemne?- jehetu main function e dhukar agei jekono static variable e value zero set koira dey)
    // plus static specifier tao deikha ager value dai retain korbo notun value initialize kortona.
    printf("%d",fun());//similarly teo giya dekhbo x variable ager value 1 da retain koira rakse r loge static specifier tao deikha notun koira initialize kortona


    return 0;
}
