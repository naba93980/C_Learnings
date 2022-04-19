#include <stdio.h>
#include <stdlib.h>
int summ=0;

int sum(int n)
{

    int z=n/10;
    int i=n%10;
    summ=summ+i;
    if (z==0)
      return summ  ;
    else
     sum(z);
    return summ;

}
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    printf("%d \n",sum(x));

    return 0;
}
