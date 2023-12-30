#include<stdio.h>
#include<stdlib.h>

int main()
{
    int * ptr;
    ptr = (int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
        ptr[i] = 2*i+1;
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr,6);
    for(int i=0;i<6;i++)
    {
         ptr[i] = 2*i;
    }

    for(int i=0;i<6;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}