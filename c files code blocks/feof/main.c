#include <stdio.h>  //fscanf(p,"%c",&c);can also ne used like scanf using format specifier and adress pointer.
#include <stdlib.h> //printf("%d",c);
#include <string.h>

int main()
{
    FILE *p = fopen("foef.txt", "r");
    int c;
    if (p == NULL)
    {
        printf("CANT OPEN");
    }

    /*while((c=fgetc(p))!=EOF)
    {

        printf("%c",c);

    }*/

    // c = feof(p); // reading the file
    printf("%c ", fgetc(p));//n
    if (!feof(p))
        printf("keep going ");//keep going

    printf("%c ", fgetc(p));//a
    printf("%c", fgetc(p));//"\n"(last character)
    if (fgetc(p) == EOF) //fgetc trying to read beyond file end (i.e here beyond \n character )
    {                    //
        if (feof(p))     //so now eof flag is set(i.e feof(p)!=0) bcoz getc tried to read beyond last character in file(i.e file end).
            printf("end of file re");
    }

    fclose(p);
    return 0;
}
