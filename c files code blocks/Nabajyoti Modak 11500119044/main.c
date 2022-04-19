#include<stdio.h>
int main()
{
int rows,x,k,digit=1,blank;
printf("Enter the number of rows in the pyramid\n");
scanf("%d",&rows);
blank=rows-1;
for(k=1;k<=rows;k++)
{
digit=k;
for(x=1;x<=blank;x++)
printf(" ");
blank--;
for(x=1;x<=k;x++)
{
printf("%d",digit);
digit++;
}
digit--;
digit--;
for(x=1;x<k;x++)
{
printf("%d",digit);
digit--;
}
printf("\n");
}
return 0;
}
