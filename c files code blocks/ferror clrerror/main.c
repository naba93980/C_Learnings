#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int x;
    FILE *p=fopen("myfile.txt","a");
    if(p==NULL)
        printf("ERROR IN OPENING THE FILE");
    else
    {
        printf("%d  ",fgetc(p)); //returns EOF bcoz of error

        if(feof(p)!=0) //to identify if EOF is due to end of stream or any error
            printf("end of file reached");

        else{
        printf("end of file not reached\n");
        if(ferror(p)) //checks if there is some error; it finds error when called and an error flag is set and ferror() returns non zero value,
        {
            printf("some error\n");
        }
        clearerr(p); //it clears the error flag from ferror() which was set when ferror() found error and thus makes ferror() return zero value.
        fclose(p);
        }
        p=fopen("myfile.txt","r");
        printf("%c",fgetc(p));
        fclose(p);

    }



    return 0;
}
