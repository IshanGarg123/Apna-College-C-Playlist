#include<stdio.h>

int main()
{
    int age;
    printf("enter age \n");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("adult");
    }
    else if(age >13 && age <18)
    {
        printf("teenager");
    }
    else
    {
        printf("child");
    }

    printf("\nThank You \n");

    int age2;
    printf("enter the value of age2 \n");
    scanf("%d",&age2);

    age2>=18 ? printf("adult"): printf("Not adult");




    return 0;
}