#include<stdio.h>

void length(char arr[])
{
    int count = 0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    printf("the length of the array is %d",count-1);
    // as count - 1 , as it also count null cha  r
}

int main()
{
    char str[100];
    gets(str);
    puts(str);

    char str1[100];
    fgets(str1,100,stdin);
    puts(str1);

    length(str1);
    return 0;
}