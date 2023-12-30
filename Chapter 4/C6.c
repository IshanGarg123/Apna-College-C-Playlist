#include<stdio.h>

int main()
{
    int n;
    printf("enter the value on n \n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d \n",i*n);
    }

    for(int i=1;i<=5;i++)
    {
        if(i==3)
        {
            break;
        }
        printf("%d \n",i);
    }
    printf("end");

    return 0;
}