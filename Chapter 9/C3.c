#include<stdio.h>


typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    char name[100];
} cse;


void printInfo(struct student s1)
{
    printf("Student Information \n");
    printf("Name : %s\n",s1.name);
    printf("roll : %d\n",s1.roll);
    printf("cgpa : %f\n",s1.cgpa);
}

int main()
{
    struct student s1 = {123,4.5,"Ishan"};
    // we can write only stu s2;
    // by typedef
    stu s2;

    cse s3 = {1,10.0,"Rahul"};
    printf("Student Information \n");
    printf("Name : %s\n",s3.name);
    printf("roll : %d\n",s3.roll);
    printf("cgpa : %f\n",s3.cgpa);
    printInfo(s1);
    return 0;
}