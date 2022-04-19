#include<stdio.h>
#include<string.h>
void sort(char str[][40],int n)
{
int i,j;
char temp[40];
for (i=0;i<n;++i)
for (j=i+1;j<n;++j)
{
if (strcmp(str[i], str[j]) > 0)
{
strcpy(temp, str[i]);
strcpy(str[i], str[j]);
strcpy(str[j], temp);
}
}
}
int main()
{
char c[40];
int n,i;
printf("\nenter the no of words - ");
scanf("%d",&n);
char str[n][40];
printf("\nenter the words -\n");
fflush(stdin);
for(i=0;i<n;i++)
fgets(str[i], sizeof(str[i]), stdin);
sort(str,n);
printf("\nafter lexographical sorting-\n");
for(i=0;i<n;i++)
printf("%s",str[i]);
}
