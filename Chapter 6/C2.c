#include<stdio.h>

int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d \n",x);
    printf(" *ptr = %d\n",*ptr);

    *ptr+=5;
    printf(" x = %d \n",x);
    printf(" *ptr = %d\n",*ptr);

    (*ptr)++;
    printf(" x = %d \n",x);
    printf(" *ptr = %d\n",*ptr);

    float price = 100.00;
    float *ptr2 = &price;
    float **pptr = &ptr2;

    int i = 5;
    int *ptr1 = &i;
    int **pptr1 = &ptr1;

    // * jab value chaiye;
    // & jab address chaite;

    printf("%d \n",**pptr1);
    printf("%d \n",*ptr1);
    printf("%d \n",i);
    return 0;
}