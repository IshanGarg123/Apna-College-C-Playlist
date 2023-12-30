#include<stdio.h>

int main()
{
    char fullName[100];
    // use to take input of multi word string
    gets(fullName);
    // use to take output of multi word string
    puts(fullName);

    char name[100];
    // modified version of gets;
    fgets(name,100,stdin);
    // stdin = standard input;
    puts(name);
    return 0;
}