#include<stdio.h>

void printaddress(int n)
{
    printf("the address of n is %p \n",&n);
}

void _printaddress(int *n)
{
    printf("the address of n is %p \n",n);
}

int main()
{
    int n =10;
    printaddress(n);
    printf("the address of n is %p \n",&n);
    _printaddress(&n);
    printf("the address of n is %p \n",&n);
    return 0;
}