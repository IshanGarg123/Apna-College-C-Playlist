#include<stdio.h>

struct Complex{
    int real;
    int img;
};

int main()
{
    struct Complex num1 = {5,8};
    struct Complex *ptr = &num1;
    printf("real part = %d\n",ptr -> real);
    printf("img part = %d\n",ptr -> img); 
    return 0;
}