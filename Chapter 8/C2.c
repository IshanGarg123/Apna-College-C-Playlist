#include<stdio.h>

int main()
{
    char firstname[50];
    scanf("%s",firstname);
    // we put name not &name;
    // name is a pointer so it not need &;

    printf("Your FirstName is %s\n",firstname); 

    char fullName[100];
    scanf("%s",fullName);
    printf("Your Full Name is : %s\n",fullName);

    // scanf is unable to take input of multivalued string;
    // it take only first word in it and ignore rest
    return 0;
}