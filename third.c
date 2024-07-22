//Write a program to read ‘n’ integers from a disc file that must contain some duplicate values and store them into an array. Perform the following operations on the array. 
//a) Find out the total number of duplicate elements. 
//b) Find out the most repeating element
//1 1 1 2 3 4 5 6 7 7 

#include <stdio.h>
int MaxRepeat(int *num , int n);
int main()
{
    int num[10];
    FILE *fptr;
    fptr = fopen("input.txt", "r");
    for(int i=0; i<10; i++)
    {
        fscanf(fptr, "%d", &num[i]);
        printf("%d ", num[i]);
    }
    int count = 0, size=10;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(num[i]==num[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nNumber of duplicate elements : %d", count);

    int ans = MaxRepeat(num, size);
    printf("\nThe most repeated element : %d", ans);
    return 0;
}
int MaxRepeat(int *num , int n) 
{
    int max = num[0], result = 0;
    for (int i = 0; i < n; i++)
        num[num[i] % n] += n;

    for (int i = 1; i < n; i++) 
    {
        if (num[i] > max) 
        {
            max = num[i];
            result = i;
        }
    }
    return result;
}