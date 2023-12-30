#include<stdio.h>

int main()
{
    // int *ptr = arr = &arr[0];
    int aadhar[5];
    int *ptr = aadhar;
    // int *ptr = &aadhar[0];

    for(int i=0;i<5;i++)
    {
        printf("%d index: ",i);
        // scanf("%d",&a[i]);
        scanf("%d",(ptr+i)); 
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
        // printf("%d\n",a[i]);
    }


    return 0;
}  