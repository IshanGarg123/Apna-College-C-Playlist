#include<stdio.h>

void storeTable(int arr[][10],int m,int n,int number)
{
    for(int i=0;i<n;i++)
    {
        arr[m][i] = number * (i+1); 
    }
}

int main()
{
    int n;
    printf("enter n = \n");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2;i<n;i++)
    {
        fib[i]= fib[i-1]+fib[i-2];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",fib[i]);
    }

    printf("\n");

    int table[2][10];

    storeTable(table,0,10,2);
    storeTable(table,1,10,3);

    for(int i=0;i<10;i++)
    {
        printf("%d ",table[0][i]);
    }
    printf("\n");

    for(int i=0;i<10;i++)
    {
        printf("%d ",table[1][i]);
    }
    return 0;
}