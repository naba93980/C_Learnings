#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n;
    printf("enter year");
    scanf("%d",&n);
    if(n%100==0)
    {
        if(n%400==0)
        printf("leap year");
        else
        printf("no leap");
    }
    else
    {
        if(n%4==0)
        printf("leap year");
        else
        printf("no leap");
    }
	return 0;
}
