#include <stdio.h>
void sum(int x,int y);
 int main()
{
    int a,b;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
void sum(int x,int y)
    {   printf("size of x %d \n",sizeof(x));
        int z;
        z=x+y;
        printf("The sum of two nos is %d",z);

    }

