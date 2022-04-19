#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)  {may or maynot use for structure padding, but be careful if used in fwrite then must be used for fread also, if not used for fwrite then must not for fread. }
int main()
{
    struct id{
        int roll;
        char name[25],city[25];
    };      //variable a, b can be set here but they need to be stored in contagious memory so prefer array otherwise it will give wrong output.
    struct id a[2];
    struct id *pi=&a[0];struct id *k=&a[1];
    printf("%d   %d \n ",pi,k);

    /*printf("enter ur details a\n");
    scanf("%d %[^\n]%*c %[^\n]%*c", &a[0].roll, a[0].name, a[0].city);
    printf("enter ur details b");
    scanf("%d %[^\n]%*c %[^\n]%*c", &a[1].roll, a[1].name, a[1].city);
    FILE *p = fopen("id.txt", "wb");
    if(p==NULL)
    printf("GONDOGOL HAI BHAI");
    fwrite(&a,sizeof(a[0]),2,p);
    fclose(p);
   */ FILE*p = fopen("id.txt", "rb");
    printf("%d",fread(&a,sizeof(a[0]),2,p));
    printf("roll = %d\nname = %s\ncity = %s\n",a[0].roll,a[0].name,a[0].city);
    printf("roll = %d\nname = %s\ncity = %s", a[1].roll, a[1].name, a[1].city);


    return 0;
}
