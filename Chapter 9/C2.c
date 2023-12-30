#include<stdio.h>
#include<string.h>


struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    ece[0].roll = 1234;
    ece[0].cgpa = 4.5;
    strcpy(ece[0].name,"Ishan");

    printf("Name : %s\n",ece[0].name);
    printf("roll : %d\n",ece[0].roll);
    printf("cgpa : %f\n",ece[0].cgpa);

    struct student s1 ={1263,7.6,"Ishu"};
    printf("Name : %s\n",s1.name);
    printf("roll : %d\n",s1.roll);
    printf("cgpa : %f\n",s1.cgpa);

    struct student *ptr = &s1;
    printf("Name : %s\n",(*ptr).name);
    printf("roll : %d\n",(*ptr).roll);
    printf("cgpa : %f\n",(*ptr).cgpa);

    struct student *ptr1 = &s1;
    printf("Name : %s\n",ptr1 -> name);
    printf("roll : %d\n",ptr1 -> roll); 
    printf("cgpa : %f\n",ptr1 -> cgpa);


    return 0;
}