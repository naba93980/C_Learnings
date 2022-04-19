#include <stdio.h>

int main()
{

    int t,count,remainder=0;
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

            remainder=j%10;
            while(j!=0)
            {
                if(remainder!=(j%10))
                    {break;}
                j=j/10;

                if(j==0)
                {
                    count+=1;

                }

            }
        }
        printf("%d",count);
    }

    return 0;
}

