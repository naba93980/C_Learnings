#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<limits.h>


    struct airline{
    int no_of_planes;
    char code_name[10];
    char color_code;
    };
    int main()
{

    struct airline indigo;
    indigo.no_of_planes=272;
    strcpy(indigo.code_name,"6E");
    indigo.color_code='B';
    printf("AIRLINE INDIGO: NO OF PLANES %d\t code name:%s \tcolorcode:%c\n",
           indigo.no_of_planes,indigo.code_name,indigo.color_code);

     struct airline airasia;
    airasia.no_of_planes=40;
    strcpy(airasia.code_name,"AA");
    airasia.color_code='R';
    printf("AIRLINE AIRASIA: NO OF PLANES %d\t code name:%s \tcolorcode:%c",
           airasia.no_of_planes,airasia.code_name,airasia.color_code);

    printf("the size of %d ",sizeof(struct airline));


}
