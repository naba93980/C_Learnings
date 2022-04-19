#include <stdio.h>

int main()
{

    int t,count,remainder=0,x;
    scanf("%d",&t);
    int a[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<t; i++)
    {
        count=0;
        for(int j=1; j<=a[i]; j++)
        {
            int x=j;
            remainder=x%10;
            while(x!=0)
            {
                if(remainder!=(x%10))
                    {break;}
                x=x/10;

                if(x==0)
                {
                    count+=1;

                }

            }
        }
        printf("%d\n",count);
    }

    return 0;
}
