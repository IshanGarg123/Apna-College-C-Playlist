#include<stdio.h>

void namaste()
{
    printf("Namaste \n");

}

void Bonjour()
{
    printf("Bonjour \n");

}

int sum(int a,int b)
{
    int c = a + b;
    return c;
}

void table(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
}

void finalprice(float n)
{
    float final = 1.18 * n;
    printf("The final price is %f",final);
}

int main()
{
    printf("Enter i for india and f for french \n");
    char a;
    scanf("%c",&a);

    if(a=='i')
    {
        namaste();
    }
    else if(a=='f')
    {
        Bonjour();
    }

    int x,y;
    printf("enter the value of a and y \n");
    scanf("%d",&x);
    scanf("%d",&y);

    int z = sum(x,y);

    printf("sum of a and b is %d \n",z);

    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    table(n);

    finalprice(n);

    return 0;
}