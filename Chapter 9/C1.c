#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 123;
    s1.cgpa = 9.2;
    // s1.name = "Ishan"
    // it give error as string defined by array notation
    // cant be given after once declared;
    strcpy(s1.name,"Ishan");

    
    printf("Student Name : %s \n",s1.name);
    printf("Student roll : %d \n",s1.roll);
    printf("Student cgpa : %f \n",s1.cgpa);

    printf("\n");

    struct student s2;
    s2.roll = 132;
    s2.cgpa = 2.9;
    strcpy(s2.name,"Akarsh");
    
    printf("Student Name : %s \n",s2.name);
    printf("Student roll : %d \n",s2.roll);
    printf("Student cgpa : %f \n",s2.cgpa);

    printf("\n");

    struct student s3;
    s3.roll = 345;
    s3.cgpa = 5.7;
    strcpy(s3.name,"Nitin");

    printf("Student Name : %s \n",s3.name);
    printf("Student roll : %d \n",s3.roll);
    printf("Student cgpa : %f \n",s3.cgpa);


    return 0;
}