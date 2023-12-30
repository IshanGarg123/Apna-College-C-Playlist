#include<stdio.h>
#include<string.h>

void salting(char pass[])
{
    char salt[] = "123";
    char newPass[100];

    strcpy(newPass,pass);
    strcat(newPass,salt);

    puts(newPass);
}


void slice(char str[] , int n,int m)
{
    char newstr[100];
    int j=0;

    for(int i=n;i<=m;i++)
    {
        newstr[j] = str[i];
        j++;
    }
    newstr[j] = '\0';

    puts(newstr);
}



int main()
{
    char str[100];
    char ch;
    
    int i =0; 

    while(ch!='\n')
    {
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i]='\0';

    puts(str);

    char str1[] = "ishan";

    salting(str1);

    slice(str1,2,4);
    return 0;
}