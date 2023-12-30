#include<stdio.h>

int main()
{
    // 1 for true
    // 0 for false
    // == != > < >= <= 
    printf("%d \n",4==4);
    printf("%d \n",4==3);
    printf("%d \n",4>=3);
    printf("%d \n",4<=3);

    // logical operator
    // && and || or ! not

    printf("%d \n",4==4 && 4==4);
    printf("%d \n",3==4 || 4==4);
    printf("%d \n",!(3>4));

    // assignment operator
    // = += -= *= /= %=
    // short cut operators

    int a=1;
    a+=5;
    printf("%d \n",a);
    a-=5;
    printf("%d \n",a);
    a*=5;
    printf("%d \n",a);
    a/=5;
    printf("%d \n",a);
    a%=5;
    printf("%d \n",a);






    return 0;
}