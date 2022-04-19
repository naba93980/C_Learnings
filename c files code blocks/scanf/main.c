#include <stdio.h>
#include <stdlib.h>

int input(char a[],int size)
{
   int i=0;

   while(i<size)
   {   if(a[i]!='.')
      {

      a[i]=getchar();
       i++;}
       else
        break;
   }
    a[i]='\0';
    printf("%s",a);
    return ;
}
int main()
{
    char c[100];
    input(c,10);


    return 0;
}
