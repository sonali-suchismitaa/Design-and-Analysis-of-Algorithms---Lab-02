//Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].
#include <stdio.h>
int prefixSum (int arr, int n);
int main()
{
    int N, sum = 0;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    int arr[N];
    int prefixSum[N];
    printf("Enter the elements : ");
    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        prefixSum[i] = sum;

    }
    for(int i=0; i<N; i++)
    {
        printf("%d ", prefixSum[i]);
    }

    return 0;
}