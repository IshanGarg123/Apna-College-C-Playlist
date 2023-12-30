#include<stdio.h>

int printNumbers(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
        // \t = one tab space;
    }
    printf("\n");

}

// Array as function Argument
int main()
{
    // void printNumber(int arr[]);
    // square brackets
    // void printNumber(int * arr);
    // pointers

    int arr[]={1,2,3,4,5,6};
    int n = 6;
    printNumbers(arr,n);
    return 0;
}