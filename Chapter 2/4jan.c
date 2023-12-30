#include<stdio.h>
#include<math.h>

int main()
{
    int a=10;
    int b=a;
    int c=b+1;
    int d=1,e;

    int x,y,z;
    x=y=z=1;

    int power = pow(2,3);
    printf("%d \n",power);
    // power = 2^3;
    // ^ it is a XOR operator 
    // it is a bitwise operator

    printf("%d \n",-8%3);
    // -3%2 = -1;
    //  3%2 = 1;

    // to convert a float value into int
    // if you use extra int it give error
    int a1 = (int) 1.999999;
    printf("%d \n",a1);

    // no need for extra float
    float a2 = 1;
    printf("%f \n",a2);

    int a3 = 5*2 - 2*3;
    int a4 = 5*2/2*3;
    int a5 = 5*(2/2)*3;
    int a6 = 5+2/2*3;
    printf("%d \n",a3);
    printf("%d \n",a4);
    printf("%d \n",a5);
    printf("%d \n",a6);







    return 0;
}