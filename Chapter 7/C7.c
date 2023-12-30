#include<stdio.h>

void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]= temp;
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 5;
    int arr[]={1,2,3,4,5};
    reverse(arr,n);
    printArray(arr,n);

      return 0;
}