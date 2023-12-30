#include<stdio.h>

int main()
{
    int age = 22;
    int * ptr = &age;
    int _age = *ptr;
    printf("%d \n",_age);
    // address of age in hexadecimal
    printf("%p\n",&age);
    // address of age in simple numbers
    printf("%u\n",&age);

    printf("%u \n",ptr);

    printf("%u\n",&ptr);

    // value for address

    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));


    return 0;
}