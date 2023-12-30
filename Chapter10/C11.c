#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file7.txt","w");

    char name[100];
    scanf("%s",name);

    fprintf(fptr,"%s",name);

    fclose(fptr);

    fptr = fopen("file7.txt","r");

    char a;
    a = fgetc(fptr);
    while(a!=EOF)
    {
        printf("%c",a);
        a = fgetc(fptr);
    }

    fclose(fptr);
    return 0 ;
}