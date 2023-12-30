#include<stdio.h>
#include<math.h>

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int a=0;
    int b=1;

    for(int i=2;i<=n;i++)
    {
        int c = b;
        b = a+b;
        a = c;
    }
    return b;
}

// sum of digits of a number

int sum1(int n)
{
    int sum = 0;
    for(int i=n;i>0;i=i/10)
    {
        int a = i%10;
        sum = sum + a;
    }
    return sum;
}

// square root of number
int SquareRoot(int n)
{
    return sqrt(n);
}

// power function

int power(int a,int b)
{
    int pow =1;
    for(int i=1;i<=b;i++)
    {
        pow = pow*a;
    }
    return pow;
}

// temp "Hot" or "Cold"

void temp(int n)
{
    if(n<=20)
    {
        printf("Cold\n");
    }
    else if(n>20 && n<=30)
    {
        printf("Normal\n");
    }
    else if(n>30)
    {
        printf("Hot\n");
    }
}

int main()
{
    printf("%d\n",fib(6));
    printf("%d\n",sum1(1001));
    printf("%d\n",SquareRoot(100));
    printf("%d\n",power(8,5));
    temp(20);
    temp(30);
    temp(40);
    return 0;
}