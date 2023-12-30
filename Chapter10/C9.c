#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    FILE *fptr;

    fptr = fopen("file5.txt","w");

    for(int i=1;i<=n;i=i+2)
    {
        fprintf(fptr,"%d\n",i);
    }

    fclose(fptr);

    return 0;
}