# include<stdio.h>

int bSearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return bSearch(arr, l, mid - 1, x);
        return bSearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int a[100];
    int n;
    int i = 0, x = 0;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("\nEnter the elements:");
    for (int j = 0; j < n; ++j)
    {
        scanf(" %d", &a[j]);
    }
    printf("\nEnter the element you want to search:");
    scanf("%d", &i);
    x=bSearch(a, 0, n-1, i);
    if (x == -1)
    {
        printf("The element not found!");
    }
    else
    {
        printf("The element found at position %d", x+1);
    }
    return 0;
}
