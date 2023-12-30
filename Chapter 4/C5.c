#include<stdio.h>

int main()
{
    int n;
    printf("enter the value on n \n");
    scanf("%d",&n);

    int sum = 0;

    for(int i=n;i>0;i--)
    {
        printf("%d \n",i);
        sum = sum +i;
    }

    printf("The sum is %d \n",sum);
}