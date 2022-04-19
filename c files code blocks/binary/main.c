#include <stdio.h>
#define MAX 100
void mult(int row1, int col1, int A[][MAX],int row2, int col2, int B[][MAX],int C[][MAX])
{
    static int i = 0, j = 0, k = 0;
    if (i >= row1)
        return;
    if (j < col2)
    {
      if (k < col1)
      {
         C[i][j] += A[i][k] * B[k][j];
         k++;

         mult(row1, col1, A, row2, col2, B, C);
      }
  	  k = 0;
      j++;
      mult(row1, col1, A, row2, col2, B, C);
    }
    j = 0;
    i++;
    mult(row1, col1, A, row2, col2, B, C);
}
void multiply(int row1, int col1, int A[][MAX], int row2, int col2, int B[][MAX])
{
	int i,j;
    if (row2 != col1)
    {
        printf("Not Possible\n");
        return;
    }
    static int C[MAX][MAX];
    mult(row1, col1, A, row2, col2, B, C);
    for ( i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        printf("%d  ", C[i][j]);
        printf("\n");
    }
}
int main()
{
	int rw1,rw2,cl1,cl2,i,j;
	printf("\nfirst matrix A\n");
	printf("\nrows - ");
	scanf("%d",&rw1);
	printf("\ncols - ");
	scanf("%d",&cl1);
	int a[rw1][MAX];
	printf("\nenter elements - ");
	for(i=0;i<rw1;i++)
	for(j=0;j<cl1;j++)
	scanf("%d",&a[i][j]);
	printf("\n\nsecond matrix B\n");
	printf("\nrows: ");
	scanf("%d",&rw2);
	printf("\ncols: ");
	scanf("%d",&cl2);
	int b[rw2][MAX];
	printf("\nenter elements: ");
	for(i=0;i<rw2;i++)
	for(j=0;j<cl2;j++)
	scanf("%d",&b[i][j]);
	if(cl1==rw2)
	{
		printf("\nmatrix mult is possible.\n");
    	multiply(rw1, cl1, a, rw2, cl2, b);
	}
	else
	printf("\nmatrix mult is not possible.");
}
