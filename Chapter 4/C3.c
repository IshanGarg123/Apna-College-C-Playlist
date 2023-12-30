#include<stdio.h>

int main()
{
    int n;
    printf("enter the value on n \n");
    scanf("%d",&n);
    int i=1;
    while(i <= n)
    {
        printf("%d\n",i);
        i++;
    }

    for(int i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
}