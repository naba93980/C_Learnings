#include<stdio.h>
#include<stdlib.h>
int main()
{   
    char c;
    FILE *p=fopen("file.pdf","r");
    while((c=(fgetc(p)))!=EOF)
    {
        printf("%c",c);
        rewind(p);//will keep the pointer(file position) always at the beginning.(i.e at 'N')
        }
    return 0;
}