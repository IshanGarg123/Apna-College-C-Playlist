#include<stdio.h>

int main()
{
    float price[3];
    for(int i=0;i<3;i++)
    {
        printf("price%d = \n",i+1);
        scanf("%f",&price[i]);
        price[i] = (118*price[i])/100;
    }

    for(int i=0;i<3;i++)
    {
        printf("price%d = %f\n",i+1,price[i]);
    }

    int age = 22;
    int *ptr = &age;
    printf("ptr=%u\n",ptr);
    ptr++;
    // ptr inc by 4 bytes;
    // sizeof(int) = 4 bytes;
    printf("ptr=%u\n",ptr);
    ptr--;
    // ptr dec by 4 bytes;
    // sizeof(int) = 4 bytes;
    printf("ptr=%u\n",ptr);

    float age1 = 22;
    float *ptr1 = &age1;
    printf("ptr=%u\n",ptr1);
    ptr1++;
    // ptr inc by 4 bytes;
    // sizeof(float) = 4 bytes;
    printf("ptr=%u\n",ptr1);
    ptr1--;
    // ptr dec by 4 bytes;
    // sizeof(float) = 4 bytes;
    printf("ptr=%u\n",ptr1);

    char a='A';
    char *ptr2 = &a;
    printf("ptr=%u\n",ptr2);
    ptr2++;
    // ptr inc by 1 bytes;
    // sizeof(char) = 1 bytes;
    printf("ptr=%u\n",ptr2);
    ptr2--;
    // ptr dec by 1 bytes;
    // sizeof(char) = 1 bytes;
    printf("ptr=%u\n",ptr2);
    return 0;
}