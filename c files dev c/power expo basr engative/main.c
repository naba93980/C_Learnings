#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    float base; int expo;
    float result=1;
    printf("enter base and exponent\n");
    scanf("%f %d",&base,&expo); 
    while(expo<0)
    {
        result=result*(1/base);
        expo++;
    }
    printf("%f",result);
	return 0;
}
