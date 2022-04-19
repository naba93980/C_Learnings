#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int n,q,rem,sum=0,count=0;
    printf("enter n ");
    scanf("%d",&n);
    while(n!=0)
    {   
        rem=n%10;
        n=n/10;
        sum=sum+rem*((int)pow(2,count++));
    }
    printf("%d",sum);
	return 0;
}
