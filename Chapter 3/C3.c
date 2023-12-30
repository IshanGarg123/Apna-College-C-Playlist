#include<stdio.h>

int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d",&number);

    if(number >= 0)
    {
        printf("positive \n");
        if(number%2==0)
        {
            printf("Even \n");
        }
        else
        {
            printf("Odd \n");
        }

    }
    else
    {
        printf("Negative \n");

    }


    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);
/*
    if(marks<=100 && marks>30)
    {
        printf("pass \n");
    }
    else if(marks>=0 && marks<=30)
    {
        printf("Fail \n");
    }
    else
    {
        printf("wrong Marks \n");
    }
    */

   marks>=30 ? printf("pass \n") : printf("fail \n");


    return 0;
}