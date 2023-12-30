#include<stdio.h>

int main()
{
    int n;
    while(1)
    {
        printf("enter the value of n \n");
        scanf("%d",&n);
        printf("%d \n",n);

        if(n%2 != 0)
        {
            break;
        }
    }
    printf("Thank You \n");

    int j;
    while(1)
    {
        printf("enter the value of j \n");
        scanf("%d",&j);
        printf("%d \n",j);

        if(j%7 == 0)
        {
            break;
        }
    }
    printf("Thank You \n");

    return 0;
}