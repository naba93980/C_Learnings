#include<stdio.h>
#include <stdio.h>
void merge(int arr[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;
int L[n1], R[n2];
for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1 + j];
i = 0;
j = 0;
k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else {
arr[k] = R[j];
j++;
}
k++;
}
while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}
while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}
}
void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
int m = l + (r - l) / 2;
mergeSort(arr, l, m);
mergeSort(arr, m + 1, r);
merge(arr, l, m, r);
}
}
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l) {
int mid = l + (r - l) / 2;
if (arr[mid] == x)
return 1;
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);
return binarySearch(arr, mid + 1, r, x);
}
return -1;
}
int main(void)
{
int no,i;
printf("\nenter the size - ");
scanf("%d",&no);
int a[no];
printf("\nenter values - ");
for(i=0;i<no;i++)
scanf("%d",&a[i]);
mergeSort(a, 0,no-1);
int x;
printf("\nenter value to be searched - ");
scanf("%d",&x);
int result = binarySearch(a, 0,no-1,x);
(result == -1) ? printf("\nElement is not present in array") : printf("\nElement %d is present in the
array",x);
}
