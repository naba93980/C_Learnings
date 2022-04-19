#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("welcome to calculator \n");
    printf(" press + for addition \n");
    printf(" press - for subtraction \n");
    printf(" press * for multiplication \n");
    printf(" press / for division \n");
     char x;
     int a,b;
     float c;
     scanf("%c",&x);
     switch (x)
     {
       case '+':
        printf("enter the numbers A & B \n");
        scanf("%d %d",&a,&b);
        c= a+b;
        printf("the result is %f ",c);
        break;
     case '-' :
        printf("enter the numbers A & B \n");
        scanf("%d %d",&a,&b);
        c= a-b;
        printf("the result is %f ",c);
        break;
     case '*' :
        printf("enter the numbers A & B \n");
        scanf("%d %d",&a,&b);
        c= a*b;
        printf("the result is %f ",c);
        break;
     case '/' :
        printf("enter the numbers A & B \n");
        scanf("%d %d",&a,&b);
        c= a/b;
        printf("the result is %f ",c);
        break;
     default:
        printf("thik se nahi likha gadhge");
     }
        return 0;

}

