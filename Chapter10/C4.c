#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt","w");

    // it delete all data in the file;
    // and add new data in it;
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');

    fclose(fptr);

    fptr = fopen("file1.txt","a");
    // it not delete the old data
    // it just add new data to file
    

    fprintf(fptr,"%c",'\n');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'E');

    fclose(fptr);


    return 0;
}