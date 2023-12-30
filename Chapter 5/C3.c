#include<stdio.h>
#include<math.h>

float squareArea(float side)
{
    return side*side;
}

float circleArea(float radius)
{
    return 3.14*radius*radius;
}

float rectangleArea(int len,int breath)
{
    return len* breath;
}

int main()
{
    printf("%f \n",pow(4,2));
    int a = 10;
    int b = 20;
    int c = 15;
    
    printf("%f \n",rectangleArea(a,b));
    printf("%f \n", squareArea(c));
    printf("%f \n",circleArea(c));
    return 0;
}