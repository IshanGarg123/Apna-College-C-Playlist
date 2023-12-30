#include<stdio.h>

// call by value
void square(int n)
{
    printf("the Area is %d \n",n*n);
}

// call by reference
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("the Area is %d \n",*n);
}

// call by value
void swap(int a,int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a=%d & b=%d \n",a,b);
}

void _swap(int*a,int*b)
{
    int c = *a;
    *a = *b;
    *b = c;
    printf("a=%d & b=%d \n",*a,*b);
}

int main()
{
    int n =123;
    square(n);
    printf("value of n is %d \n",n);
    _square(&n);
    printf("value of n is %d \n",n);
    
    int x = 5 , y = 10;
    swap(x,y);
    printf("x=%d & y=%d \n",x,y);
    _swap(&x,&y);
    printf("x=%d & y=%d \n",x,y);
    return 0;
}