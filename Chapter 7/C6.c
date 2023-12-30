#include<stdio.h>

int oddNum(int * arr,int n)
{
    int odd = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            odd++;
        }
    }
    return odd;
}

int main()
{
    int marks[2][3] = {};
    marks[0][0] = 10;
    marks[0][1] = 20;
    marks[0][2] = 30;

    marks[1][0] = 40;
    marks[1][1] = 50;
    marks[1][2] = 60;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }

    int arr[]={1,2,3,4,5,6};
    printf("%d \n",oddNum(arr,6));
    printf("%d \n",*(arr+2));
    //printf("%d \n",*(arr+6));
    // it print any garbage value;
     

    return 0;
}