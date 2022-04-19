#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {   printf(("%s","enter %d value"),i+1);//("%s",("enter %d value",i+1)); is illegal becoz then %d will be replaced by a integer first in a array of characters ; while %s wants address of the first character of the array of type character.so an integer in a character array is illegal so there will be problem.
        scanf("%d",&a[i]); //(("%s","enter %d value"),i+1) is legal bcoz %s will be replaced by the string, where all are characters,then after that %d will be replaced by an integer so no problm.
    }
    for(int i=0;i<n;i++)
    {  int rem=(a[i]%5);
       if(a[i]>=38&&(rem>=3))
        printf("%d\n",(a[i]+5-rem));

       else
        printf("%d\n",a[i]);
    }
    return 0;
}

