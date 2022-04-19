#include<stdio.h>

int main()
{

    int a=3,4,5;//error since comma here acts as a separator so it will read like int a=3, int 4,int 5;
    int x=1;
    int y=2;
    int va= (printf("%s","hellooooooooo"),5);
    printf("\n%d",va);
    printf("%d",a);
    static int var;
    int num;
    num=(var=(15,var+35));
    printf("\n%d",num);
}
