#include <stdio.h>
#include <stdlib.h>
struct tga
{
int a;
char x;
double z;
int l;

int k;


}
var;
int main()
{
    /*var.x='f';
    var.y='g';
    var.z=3;
    struct tga *p=&var;
    printf("%c..%d\n",*((char*)p+1),*((char*)p+4));*/
    printf("%d",sizeof(struct tga));
    return 0;
}
