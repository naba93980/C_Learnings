#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p=fopen("file.txt","a+");
    /*char a=fgetc(p);
    printf("%c",a);
    fclose(p);
    p = fopen("file.txt", "r");
    a = fgetc(p);
    printf("%c", a);*/

    /*char a[10];
    fgets(a,5,p);
    printf("%s\n",a);
    fclose(p);
    fgets(a, 5, p);
    printf("%s", a);*/

   //fputc('B',p);


    fputs("NABAJYOTI IS A  GOOD BOI",p);
    fclose(p);



    return 0;
}