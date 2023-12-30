#include<stdio.h>

int main()
{
    // created file pointer
    FILE *fptr;
    FILE *fptr1;

    // to create file
    // we created a file in the folder
    fptr1 = fopen("file2.txt","w");

    // to create a new file
    // to open a file
    fptr = fopen("file1.txt","r");

    if(fptr == NULL)
    {
        printf("file dosen't exist");
    }
    else
    {
        printf("file exist");
    }

    // modes are
    // "r"
    // "rb"
    // "w"
    // "wb"
    // "a"

    // to close file
    fclose(fptr);


    return 0;
}