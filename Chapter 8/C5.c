#include <stdio.h>
// library for string functions;
#include <string.h>

int main()
{
    char name[] = "Ishan";
    int len = strlen(name);
    printf("length is : %d\n", len);

    char str[] = "Hello";
    char str1[] = "World";
    strcpy(str, str1);
    // the value of str = str1;
    puts(str);

    char str2[] = "Hello";
    strcat(str2, str1);
    // this line str2 = str2 + str1 ;
    puts(str2);

    char x[] = "Apple";
    char y[] = "Banana";
    printf("%d\n", strcmp(x, y));
    // if same ans=0;
    // if x>y ans>0;
    // if x<y ans<0
}