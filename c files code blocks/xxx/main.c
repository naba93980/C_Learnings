#include<stdio.h>
int main()
{
int n, c, d, num = 1, space;
printf("Enter a number\n");
scanf("%d",&n);
space = n - 1;
for ( d = 1 ; d <= n ; d++ )
{
num = d;
for ( c = 1 ; c <= space ; c++ )
printf(" ");
space--;
for ( c = 1 ; c <= d ; c++ )
{
printf("%d", num);
num++;
}
num--;
num--;
for ( c = 1 ; c < d ; c++)
{
printf("%d", num);
num--;
}
printf("\n");
}
return 0;
}
