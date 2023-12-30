#include<stdio.h>

int countX(int arr[],int n,int x)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    return count;
}

int largest(int arr[],int n)
{
    int large = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
    return large;
}

int main()
{
    int n;
    printf("enter n = \n");
    scanf("%d",&n);

    int arr[n];

    printf("enter the values in the array \n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;
    printf("enter element you want to count \n");
    scanf("%d",&x);

    printf("the count is %d \n",countX(arr,n,x));

    printf("the largest is %d \n",largest(arr,n));

}