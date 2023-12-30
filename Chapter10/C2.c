#include<stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file1.txt","r");

    char ch;
    // it take file data as input by user
    
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fclose(fptr);
    return 0;
}