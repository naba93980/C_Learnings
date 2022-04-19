#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    for(int i=0;i<3;i++)

    {
        printf("%d row is =\t",i+1);
        for (int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
