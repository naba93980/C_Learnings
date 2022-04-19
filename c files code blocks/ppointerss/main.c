#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[]={15,47,35,87,69,95,35,80,74};
     int min=arr[0];
     int max=arr[0];
     for(int i=1;i<(sizeof(arr)/sizeof(arr[0]));i++)
     {
         if(arr[i]>max)
            {
                max=arr[i];
            }
         else
         {
           if(arr[i]<min)
             {
                min=arr[i];
             };
         };


     };
     printf("%d, %d",max,min);
        return 0;
}
