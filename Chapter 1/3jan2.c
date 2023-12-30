#include<stdio.h>
int main()
{
    int side;
    printf("enter the side of the square \n");
    scanf("%d",&side);
    printf("the area of the square is %d \n",side*side);

    int radius;
    printf("enter the radius of the circle \n");
    scanf("%d",&radius);
    printf("the area of the circle is %f",3.14*radius*radius);
}