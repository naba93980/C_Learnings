#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
   int a[x];

    printf("%d\n",sizeof(a[++x]));//size of element at a[++x] location.[++x] doesnt get evaluated. bcoz the operand is not a (variable length array TYPE)..operand is an element and sizeof operator is concerned with its type.
    printf("%d\n",sizeof(int[++x]));//[++x] gets evaluated bcoz operand here is a {variable length array TYPE (int[++x])}
    printf("%d\n",x);
     printf("%d\n",sizeof(a));//actual number of elements in the array remains same even if [++x] is evaluated as only the type gets modified which has no link with the original declaration of the array.
     printf("%d",(3,4,5,6,7,8));
    return 0;
}
