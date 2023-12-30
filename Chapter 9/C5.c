#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec ;

void calSum(vec v1,vec v2,vec sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n",sum.x);
    printf("sum of y is : %d\n",sum.y);

}


int main()
{
    vec v1 = {5,10};
    vec v2 = {3,7};
    vec sum = {0};
    calSum(v1,v2,sum);
    return 0;
}