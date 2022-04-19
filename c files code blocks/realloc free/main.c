#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p=(int*)calloc(2,sizeof(int));
    printf("Enter the integers\n");
    scanf("%d%d",p,(p+1));
    printf("%d\n%d\n",*p,*(p+1));
    printf("enter 2 more elements\n");
    p=realloc(p,sizeof(int));
    scanf("%d%d",(p+2),(p+3));
    printf("%d\n%d\n%d\n%d",*p,*(p+1),*(p+2),*(p+3));

    return 0;
}
