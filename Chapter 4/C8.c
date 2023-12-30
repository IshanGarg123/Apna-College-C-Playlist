#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d \n",i);
    }

    for(int i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;
        }
        printf("%d \n",i);
    }

    // odd number from 5 to 50
    for(int i=5;i<=50;i=i+2)
    {
        printf("%d \n",i);
    }

    // factorial of n

    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int  fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }

    printf("the value of fact is %d \n",fact);

    // reverse order table

    int n1;
    printf("enter the value of n1 \n");
    scanf("%d",&n1);
    for(int i=10;i>=1;i--)
    {
        printf("%d \n",n1*i);
    }

}