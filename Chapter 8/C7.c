#include<stdio.h>

int vowels(char arr[])
{
    int count = 0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] =='i' || arr[i] =='o' || arr[i] =='u')
        {
            count++;
        }
    }
    return count;
}

void charpresent(char arr[],char x)
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==x)
        {
            printf("Yes\n");
            return;
        }
    }
   printf("No");
   return;
}


int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("%d\n",vowels(name));

    charpresent(name,'a'); 

    return 0;
}