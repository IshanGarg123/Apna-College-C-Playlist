#include<stdio.h>

void vowels(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i] == 'a')
        {
            arr[i]='A';
        }
        else if(arr[i] == 'e')
        {
            arr[i]='E';
        }
        else if(arr[i] == 'i')
        {
            arr[i]='I';
        }
        else if(arr[i] == 'o')
        {
            arr[i]='O';
        }
        else if(arr[i] == 'u')
        {
            arr[i]='U';
        }
    }
}

void high(char arr[])
{
    char temp[256] = {0};
    int max = 0;
    char result;

    for(int i=0;arr[i]!='\0';i++)
    {
        temp[arr[i]]++;
        if(temp[arr[i]]>max)
        {
            max = temp[arr[i]];
            result = arr[i];
        }
    }
    printf("%c \n",result);
    printf("%d times",max);
}

void remove_blank(char arr[])
{
    char temp[100];
    int x=0;

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=' ')
        {
            temp[x] = arr[i];
            x++;
        }
    }
    printf("%s",temp);
}

void convert(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i] = arr[i] - 32;
        }
        else if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i] = arr[i] + 32;
        }
    }
}

int main()
{
    char name[100];
    fgets(name,100,stdin);
    //vowels(name);
    //puts(name);
    //high(name);
    //remove_blank(name);
    convert(name);
    printf("%s",name);
    return 0;
}