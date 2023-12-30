#include<stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    int b = (int) a;

    printf("%d \n",b);

    if(b>=48 && b<=58)
    {
        printf("it is a number");
    }
    else
    {
        printf("it is not a number");
    }
}