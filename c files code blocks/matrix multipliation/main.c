#include<stdio.h>

int main()
{

    int m,n,x,y,i,j,k,sum=0;
    printf("enter rows & colum of matrix a \n");
    scanf("%d %d",&m,&n);
    printf("enter rows & columnm for matrix b \n");
    scanf("%d %d",&x,&y);

     if(n==x)
    {
        int a[m][n];
        int b[x][y];

        printf("Enter elements of a\n");
        for( i=0; i<m; i++)
        {
            for( j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter elements of b\n");
        for( i=0; i<x; i++)
        {
            for( j=0; j<y; j++)
                scanf("%d",&b[i][j]);
        }

        for( i=0; i<m; i++)
        {
            for( j=0; j<y; j++)
            {
                for( k=0; k<n; k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                printf("%d  ",sum);
                sum=0;
            }
            printf("\n");

        }

    }
    else
        printf("not possible");
    return 0;

}
