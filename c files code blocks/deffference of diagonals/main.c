#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum_dia_1,sum_dia_2;
    sum_dia_1=sum_dia_2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_dia_1+=a[i][j];
            }
        }
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(j==((n-1)-i))
            sum_dia_2+=a[i][j];
        }

    printf("%d",abs(sum_dia_1-sum_dia_2));
    return 0;
}
