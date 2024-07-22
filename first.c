// Write a program to find out the second smallest and second largest element stored in an array of n integers.
#include <stdio.h>
int secondSmallest(int arr[], int n, int l, int s);
int secondLargest(int arr[], int n, int l, int s);
int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int s=arr[0], l=arr[0];
    for(int i=1; i<n; i++)
    {
        if(l<arr[i])
        l = arr[i];
    }
    for (int i=1; i<n; i++)
    {
        if (s>arr[i])
        s = arr[i];
    }

    int ss = secondSmallest(arr, n, l, s);
    int sl = secondLargest(arr, n, l, s);

    printf("Second Largest is %d & Second Smallest is %d", sl, ss);
    return 0;
}
int secondSmallest(int arr[], int n, int l, int s)
{
    int ss = l;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>s && arr[i]<ss)
        ss = arr[i];
    }
    return ss;
}

int secondLargest(int arr[], int n, int l, int s)
{
    int sl = s;
    for (int i=0; i<n; i++)
    {
        if(arr[i]<l && arr[i]>sl)
        sl = arr[i];
    }
    return sl;
}