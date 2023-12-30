#include<stdio.h>

int main()
{
    FILE* ptr;
    ptr = fopen("file2.txt","w");

    for(int i=0;i<20;i++)
    {
        char a;
        scanf("%c",&a);
        fputc(a,ptr);
    }

    fclose(ptr);

    ptr = fopen("file2.txt","r");

    char ch;
    ch = fgetc(ptr);
    while(ch != EOF)
    {
        printf("%c",ch);
        ch = fgetc(ptr);
    }
    printf("\n");
    fclose(ptr);

}