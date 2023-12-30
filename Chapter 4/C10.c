#include<stdio.h>

int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);

    int a = 0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }

    if(a==0)
    {
        printf("The number is prime \n");
    }
    else
    {
        printf("the number is not prime \n");
    }

    int n1;
    printf("enter the value of n1 \n");
    scanf("%d",&n1);

    for(int i=1;i<=n1;i++)
    {
        int a1=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0) 
            {
                a1=1;
                break;
            } 
        }
        if(a1==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}