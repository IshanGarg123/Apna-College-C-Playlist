#include <stdio.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;



int main()
{
    acc acc1={1,"Ishan"};
    acc acc2={2,"Akarsh"};
    acc acc3={3,"Nitin"};
    acc acc4={4,"Rahul"};

    printf("acc no = %d\n",acc1.accountNo);
    printf("name = %s\n",acc1.name);

    return 0;
}