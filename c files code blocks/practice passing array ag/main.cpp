#include <iostream>
#include<conio.h>
using namespace std;



int array_name(int array[],int size)
{   int sum=0;
 cout<<sizeof(array);
    for(int i=0;i<size;i++)
        {
            sum=sum+(array[i]);

        }
    return sum;
}

int main()
{
    int my_array[]={1,2,3,4,5,6};
    cout<<sizeof(my_array)<<"\n";
    int total=array_name(my_array,6);
    cout<<"total="<<total;
    return 0;
}
