#include<stdio.h>

int main()
{
    FILE* ptr;

    ptr = fopen("file2.txt","r");

    int a;
    fscanf(ptr,"%d",&a);
    printf("%d\n",a);
    fscanf(ptr,"%d",&a);
    printf("%d\n",a);
    fscanf(ptr,"%d",&a);
    printf("%d\n",a);

    fclose(ptr);
    return 0 ;
}