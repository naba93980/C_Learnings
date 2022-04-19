#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p=fopen("getwputw.txt","r+");
    int x=putw('A',p);
    fclose(p);
    printf("%d",x);
    return 0;
}