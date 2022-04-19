#include <stdio.h>
#include <stdlib.h>
int* input()
{
    int* p=(int*)malloc(sizeof(4));
    scanf("%d",p);
    return p;
}
int main()
{
    int *p=input();
    printf("%d\n",*p);
    printf("%d\n",p);
    free(p);
    printf("%d",p);
    return 0;
}
