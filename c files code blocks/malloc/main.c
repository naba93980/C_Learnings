#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number of integers: ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the integer %d: ",i+1);
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("Integer %d: ",i+1);
        printf("%d\n",*(p+i));
    }

}
