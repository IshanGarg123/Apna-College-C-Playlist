#include<stdio.h>

void DoWork(int a,int b,int * sum ,int *prod,int* avg)
{
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}

int main()
{
    int a=3,b=5;
    int sum,prod,avg;

    DoWork(a, b,&sum,&prod,&avg);

    printf("sum=%d, prod=%d, avg=%d \n", sum, prod, avg);
    return 0;

}