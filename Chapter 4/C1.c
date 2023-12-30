#include<stdio.h>

int main()
{
    // i is iterator,counter
    for(int i=1;i<=10000;i=i*10)
    {
        printf("Hello world \n");
    }

    for(int i=1;i<=100;i=i+1)
    {
        printf("%d \n",i);
    }

    for(int i=10;i>=1;i=i-1)
    {
        printf("%d \n",i);
    }
    return 0;
}