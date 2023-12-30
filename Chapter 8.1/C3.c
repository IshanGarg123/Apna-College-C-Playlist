#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("%d \n",strlen(name));

    char name1[] = "Ishan";
    strcpy(name,name1);
    printf("%s\n",name);

    strcat(name,name1);
    printf("%s\n",name);

    char a[] = "Apple";
    char b[] = "banana";
    char c[] = "Apple";

    printf("%d\n",strcmp(a,b));
    printf("%d\n",strcmp(a,c));

}