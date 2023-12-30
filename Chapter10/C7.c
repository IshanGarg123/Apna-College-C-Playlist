#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file3.txt","w");

    for(int i=0;i<5;i++)
    {
        int a;
        scanf("%d",&a);
        fprintf(fptr,"%d",a);
        fputc(' ',fptr);
    }

    fclose(fptr);
    fptr = fopen("file3.txt","r");

    for(int i=0;i<5;i++)
    {
        int b;
        fscanf(fptr,"%d",&b);
        printf("%d\n",b);
    }

    fclose(fptr);
    return 0;
}