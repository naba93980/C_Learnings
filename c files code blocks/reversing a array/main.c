#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    int i,j;
    for(int i=0;i<5;i++)
       printf("%d  ",a[i]);
    for(i=0,j=4; i<5&&j>=0; i++,j--) //for more than one condition checking
//use && operator not comma, else left hand operand of comma wont be evaluated...
//e.g. i<5,j>=0 will give warning "left hand operator of comma had no effect"
//i.e i<5 will have no effect in checking the entire condition , the entire condition
//will be checked based upon j>=0 or not
        b[i]=a[j];
    printf("\n");
    for(int i=0;i<5;i++)
       printf("%d  ",b[i]);

    return 0;
}
