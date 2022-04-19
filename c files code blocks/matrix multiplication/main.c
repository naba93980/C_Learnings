#include <stdio.h>

// MATRIX MULTIPLICATION

int main()
{
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    printf("Enter the elements of first matrix\n");
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    }


    printf("Enter the elements of second matrix\n");
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    }


    printf("The first matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d  ",a[i][j]);
        printf("\n");

    }

    printf("The second matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d  ",b[i][j]);
        printf("\n");

    }


    int mat_mul[n][n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                sum+=a[i][k]*b[k][j];
            }

            mat_mul[i][j]=sum;
            sum=0;
        }
    }

    printf("The product matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d   ",mat_mul[i][j]);

        printf("\n");
    }

    return 0;
}
