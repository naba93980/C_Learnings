#include<stdio.h>        //14325 //154326
#include<stdbool.h>

int main()
{
    int hold1, hold2, position1, position2,n,l,j,g,sum=0;;

    scanf("%d",&n);
    int a[n];
    int i;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=(n-1); i++)
    {
        if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]>a[i+1]))
        {
            hold1=a[i];
            position1=i;
            break;
        }

    }
    for(int i=0; i<=(n-1); i++)
    {
        if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]<a[i-1]))
        {
            hold2=a[i];
            position2=i;
        }
    }
    a[position1]=hold2;
    a[position2]=hold1;

    j=g=(position2-1);

int  x=1;
    for(int i=(position1+1); i<((position1+1)+(position2-position1)/2); i++)
    {
        if(a[i+1]<a[i])
        {    x=2;
            l=a[i];
            a[i]=a[j--];
            a[g--]=l;
        }
    }

    for(int i=0; i<n-1; i++)
    {

            if(a[i+1]>a[i])
                sum=sum+0;
            else
                sum=sum+1;

    }
     if(sum==0)

      { printf("yes\n");
       if(x==1)
    printf("swap %d %d ",position1+1,position2+1);
    else
    printf("reverse %d %d ",position1+1,position2+1);}


    else printf("no");



    return 0;

}
