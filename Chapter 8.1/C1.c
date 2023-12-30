#include<stdio.h>

int main()
{
    char fname[] = "Ishan";
    char lname[] = "Garg";

    // way 1
    printf("%s ",fname);
    printf("%s\n",lname);

    // way 2
    for(int i=0;fname[i]!='\0';i++)
    {
        printf("%c",fname[i]);
    }  

    printf("\n");

    for(int i=0;lname[i]!='\0';i++)
    {
        printf("%c",lname[i]);
    }

    printf("\n");

    char name[100];
    scanf("%s",name);
    printf("%s\n",name);

    char fullname[100];
    scanf("%s",fullname);
    printf("%s",fullname);

    return 0;
}