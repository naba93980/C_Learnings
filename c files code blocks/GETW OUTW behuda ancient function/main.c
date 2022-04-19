#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p=fopen("getput.txt","w");
    printf("%d\n",putw(75,p));
    putw(79,p);//doesnot work
    fclose(p);
    p=fopen("getput.txt","r");
    printf("%d",getw(p));
    return 0;
}

