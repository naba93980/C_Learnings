#include<stdio.h>
//Searching in array
int main()
{
    int n,key,flag=0,pos=-1;
    printf("Enter the number of elements in array.\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array.\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number to be searched.\n");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    printf("The number %d is present in position no. %d.\n",key,pos+1);
    else
    printf("Not present in array.\n");
    return 0;
}
