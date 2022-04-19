#include <stdio.h>
#include <stdlib.h>
int fun()
{
    int a=5;
    return a;
}
int main()
{ char arr[]="hello";
    char *p=arr;
    printf("%s",++arr);

    printf("%d",--fun());

    return 0;
}
