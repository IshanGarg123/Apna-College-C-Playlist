#include<stdio.h>

int main()
{
    /*
    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);

    if(marks<30)
    {
        printf("C \n");
    }
    else if(marks>=30 && marks<70)
    {
        printf("B \n");
    }
    else if(marks>=70 && marks<90)
    {
        printf("A \n");
    }
    else if(marks>=90 && marks<=100)
    {
        printf("A+ \n");
    }
    */

    char a;
    printf("enter the character \n");
    scanf("%c",&a);

    if( a>='A' && a<='Z')
    {
        printf("upper case \n");
    }
    else if(a<='a' && a<='z')
    {
        printf("lower case \n");
    }
    else
    {
        printf("not english letter \n");
    }

    return 0;
}