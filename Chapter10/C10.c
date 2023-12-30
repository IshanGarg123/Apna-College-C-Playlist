#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file6.txt","w");

    int a,b;
    scanf("%d %d",&a,&b);

    fprintf(fptr,"%d\n",a);
    fprintf(fptr,"%d\n",b);

    fclose(fptr);

    fptr = fopen("file6.txt","r");
    int c,d;

    fscanf(fptr,"%d",&c);
    fscanf(fptr,"%d",&d);

    int x = c + d;

    fclose(fptr);

    fptr = fopen("file6.txt","w");

    fprintf(fptr,"%d",x);

    fclose(fptr);
    return 0;
}