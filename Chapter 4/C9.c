#include<stdio.h>

int main()
{
    // sum of no from 5 to 50
    int sum =0;

    for(int i =5;i<=50;i++)
    {
        sum =sum +i;
    }

    printf("the sum is %d \n",sum);
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}