#include <stdio.h>
#include <stdlib.h>

int main()

{   struct id{
    int a;
    char c[25],b[25];

}a,b;
    struct id *p=&a;
    struct id *k=&b;
    printf("%d,%d",p,k);
    return 0;
}
