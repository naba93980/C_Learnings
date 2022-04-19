#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE  *ptr=NULL;
    char line[50];
    ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",line);
    printf("%s",line);
    return 0;
}