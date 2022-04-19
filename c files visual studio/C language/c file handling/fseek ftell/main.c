#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c;
    
    FILE *p = fopen("file.txt", "r");

    /*while (1)
    {
        c = fgetc(p);
        if (c == EOF)
        {
            if (feof(p) == 0)
            {
                printf("something is wrong");
            }
            else
            {
                printf("its over");
            }

            break;
        }

        printf("%c", c);
    }*/
    {//c=ftell(p);
    //printf("%d\n",c);
    }
    
    fseek(p,17,SEEK_CUR);
  {  //printf("%c\n",fgetc(p));
    //fscanf(p,"%s",user);
    //printf("%s",user);
    }
   
    printf("%d...",(c=ftell(p)));
    
    printf("%d...",fseek(p,-10,SEEK_END));//fseek return zero if successful or -1 if unsuccesful.
    printf("%d..", (c = ftell(p)));  //ftell returns -1 if unsuccesfull.
    printf("%d...", fseek(p, 5, SEEK_SET));
    printf("%c..",fgetc(p));
    printf("%d..", (c = ftell(p)));
    return 0;
}