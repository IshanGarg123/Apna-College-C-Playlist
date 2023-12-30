#include <stdio.h>
#include <string.h>

void salting(char pass[])
{
    char salt[10] = "123";
    char newPass[100];
    strcpy(newPass, pass);
    strcat(newPass, salt);

    // printf("%s",newPass);
    puts(newPass);
}

void slice(char arr[], int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int vowels(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

void charPresent(char arr[], char x)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == x)
        {
            printf("yes\n");
            return;
        }
    }
    printf("No\n");
    return;
}

int main()
{
    char pass[100];
    scanf("%s", pass);
    salting(pass);
    slice(pass, 3, 6);
    printf("%d\n", vowels(pass));
    charPresent(pass,'i');  

    return 0;
}