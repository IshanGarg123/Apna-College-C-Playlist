#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt","r");

    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));

    fclose(ptr);

    ptr = fopen("file1.txt","w");

    fputc('A',ptr);
    fputc('P',ptr);
    fputc('P',ptr);
    fputc('L',ptr);
    fputc('E',ptr);

    fclose(ptr);

    return 0;
}