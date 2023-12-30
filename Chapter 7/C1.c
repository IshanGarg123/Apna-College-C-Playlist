#include<stdio.h>

int main()
{
    int marks[]= {10,20,30};

    int marks1[3];
    printf("enter marks[0]\n");
    scanf("%d",&marks1[0]);

    printf("enter marks[1]\n");
    scanf("%d",&marks1[1]);

    printf("enter marks[2]\n");
    scanf("%d",&marks1[2]);

    printf("marks1 = %d marks2 = %d marks3 = %d \n",marks1[0],marks1[1],marks1[2]);

    return 0;
}