#include<stdio.h>

void printHW(int count)
{
    if(count == 0)
    {
        return;
    }

    printf("Hello World \n");
    printHW(count-1);
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }

    int a = sum(n-1);
    return a+n;
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int a = factorial(n-1);
    return a*n;
}

float conevtTemp(float celcius)
{
    float f =(celcius * 9)/5 + 32;
    return f;
}

int calpercentage(int a,int b,int c)
{
    return ((a+b+c)/3);
}

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }

    int a = fib(n-1)+fib(n-2);
    return a;
}


int main()
{
    printHW(5);
    printf("%d \n", sum(10));
    printf("%d \n", factorial(10));
    printf("%f \n", conevtTemp(37 ));
    printf("%d \n", calpercentage(98,95,99));
    printf("%d \n", fib(6));
    return 0;
}