#include<stdio.h>
int main()
{
    int i,j,c,r,size,count=0;
    printf("Enter the number of rows and col: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		 printf("enter the array element a[%d][%d] : ",i,j);
    		 scanf("%d",&a[i][j]);
		}
    }
     size= r *c;
     for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		if(a[i][j]==0)
    		count++;
		}
	}
if(count>size/2){
printf("\nThe matrix is sparse matrix");
printf("\n");
		printf("Rows\tColumns\tValue\t");
		printf("\n");
		printf("%d\t%d\t%d",r,c,(size-count));
		printf("\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]!=0)
				{
					printf("%d\t%d\t%d",i,j,a[i][j]);
					printf("\n");
				}
			}
		}
	}
else{
	printf("\nThe matrix is not a sparse matrix ")	;
	}
}
