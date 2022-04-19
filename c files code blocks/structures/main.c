#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct student{
long int Roll_number;
char Name[20];
char sec;
 }boy1,boy2;

 int main()
 {


      boy1.Roll_number=212258;
   boy1.sec='A';
     strcpy(boy1.Name,"nabajyoti");

   printf("NAME %s\t Roll %ld\t section %c \n",boy1.Name,boy1.Roll_number,boy1.sec);



      boy2.Roll_number=212250;
   boy2.sec='y';
     strcpy(boy2.Name,"laura lassan");
     printf("name %s \t roll %ld \t sec %c,",boy2.Name,boy2.Roll_number,boy2.sec);
 }

