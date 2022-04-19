#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	int i,j,k,l;
	int x=1;
	for(i=1;i<=num;i++)
	{
	    for(j=i;j<num;j++)
	    printf(" ");
	    for(k=i;k<=x;k++)
	    printf("%d",k);
	    for(l=x-1;l>=i;l--)
	    printf("%d",l);
	    printf("\n");
	    x+=2;

	}
	return 0;
}
