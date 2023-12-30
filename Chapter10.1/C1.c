#include<stdio.h>

int main()
{
    FILE * fptr;
    fptr = fopen("file1.txt","w");
    char name[100];
    scanf("%s",name);
    fprintf(fptr,"%s",name);
    fclose(fptr);

    fptr = fopen("file1.txt","r");
    

}