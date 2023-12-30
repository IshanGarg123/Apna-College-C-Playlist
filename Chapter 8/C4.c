#include<stdio.h>

int length(char arr[])
{
    int count = 0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count - 1;
}

int main()
{
    // string is char array hence it is pointer
    //char str[] = {'h','e','l','l','o'}; 
    //char * str1 = {'h','e','l','l','o'};

    char *str = "Hello World";
    puts(str);
    str = "Hello";
    puts(str);

    char str1[10];
    fgets(str1,10,stdin);
    puts(str1);
    printf("%d\n",length(str1));
    //str1 = "hello";
    // char str1[] = the value cant be change
    // char * str1 = the value can be change;
    return 0;
}