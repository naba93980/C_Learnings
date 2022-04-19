#include <stdio.h>
#include <stdlib.h>

int sum(int x,int y){return x+y;}
int sub(int x,int y){return x-y;}
int mul(int x,int y){return x*y;}
int divi(int x,int y){return x/y;}



int main()
{
    int a,b,choice;
    int (*ptr[4])(int, int)={&sum,&sub,&mul,&divi};
    printf("enter a & b\n");
    scanf("%d %d",&a,&b);
    printf("enter your choice\n");
    scanf("%d",&choice);
    printf("the answer is  %d",(*ptr[choice-1])(a,b));
    return 0;
}
