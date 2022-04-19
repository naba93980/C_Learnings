#include<stdio.h>

int main()
{
int a[10][10];
int x,y,rows,column;
printf("\nEnter the number of rows in the matrix:");
scanf("%d",&rows);
printf("\nEnter the number of columns in the matrix:");
scanf("%d",&column);
printf("\nEnter the elements of the matrix:\n");
for(x=0;x<rows;x++)
{
 for(y=0;y<column;y++)
     {
      scanf("%d",&a[x][y]);
     }
}
printf("\nThe array entered is:\n");
for(x=0;x<rows;x++)
{
 for(y=0;y<column;y++)
     {
      printf("%d  ",a[x][y]);
     }
 printf("\n");
}
/*row-major printing*/
printf("\nThe row-major order printing is:\n");
for(x=0;x<rows;x++)
{
 for(y=0;y<column;y++)
     {
      printf("%d  ",a[x][y]);
     }
}
/*column-major printing*/
printf("\nThe column-major order printing is:\n");
for(y=0;y<column;y++)
{
 for(x=0;x<rows;x++)
     {
      printf("%d  ",a[x][y]);
     }
}
}
