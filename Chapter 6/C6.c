#include<stdio.h>

void _max(int *a,int *b)
{
    if(*a > *b)
    {
        printf("A is greater");
    }
    else if(*a == *b)
    {
        printf("A is equal to B");
    }
    else
    {
        printf("B is greater");
    }
}

void printAlpha()
{
    char a='A';
}

int main()
{
    int a,b;
    printf("enter a = \n");
    scanf("%d",&a);
    printf("enter b = \n");
    scanf("%d",&b);

    _max(&a,&b);
}