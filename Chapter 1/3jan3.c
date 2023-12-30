#include<stdio.h>

int main()
{
    int length;
    int breath;
    printf("enter the value of length \n");
    scanf("%d",&length);
    printf("enter the value of breath \n");
    scanf("%d",&breath);
    printf("the area of the rectangle is %d \n", length * breath);
    printf("the perimeter of the rectangle is %d \n", length + breath);

    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("the cube on n is %d \n", n*n*n);
}