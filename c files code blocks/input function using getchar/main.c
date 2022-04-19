#include <stdio.h>
#include <stdlib.h>
void input(char arr[100])
{
    int ch; int i;
    for( i=0;i<100;i++)
    {
        ch=getchar();
        if(ch=='.'||ch=='?'||ch=='\n')
        {
          arr[i]=ch;
          break;
        }
        else
        {
           arr[i]=ch;
        }
     }
    arr[++i]='\0';
    printf("%s",arr);
}


int main()
{
    char str[100];
    input(str);
    return 0;
}
