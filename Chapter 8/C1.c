
#include<stdio.h>

//  \n = next line
//  \t = tad space
//  \0 = NUll charcter

void printString(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
 

int main()
{
    // char store single word only
    // string is a char arr
    // NULL char denotes the string termination

    // NAME IS A STRING
    // '\0' reprsent that the char array is a string
    // if we not put '\0' it means the char arr is not string
    // some function can be applied on strings
    // which cant be apply on the char array directly


    char name[] = {'I','S','H','A','N','\0'};
    // type 2 for initialisation
    // char name[] = "ISHAN";
    char class[] = {'C','H','I','T','K','A','R','A','\0'};
    // type 2 for initialisation
    // char class[] = "CHITKARA";

    char firstName[] = "Ishan";
    char lastName[] = "GARG";
    printString(firstName);
    printString(lastName);
    return 0;
}