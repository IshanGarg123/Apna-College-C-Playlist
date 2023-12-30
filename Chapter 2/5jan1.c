#include<stdio.h>

int main()
{
    int x;
    printf("enter the value of x \n");
    scanf("%d",&x);
    printf("%d", x%2 ==0);

    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    float average = (a+b+c)/3;
    printf("the average of 3 numbers is %f \n" ,average);

    int d;
    int e;
    scanf("%d",&d);
    scanf("%d",&e);
    if(d>=e)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",e);
    }


}