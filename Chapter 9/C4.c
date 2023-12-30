#include <stdio.h>

struct address
{
    int house;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address x)
{
    printf("House_NO : %d\n", x.house);
    printf("Block_NO : %d\n", x.block);
    printf("City : %s\n", x.city);
    printf("State : %s\n", x.state);
}


int main()
{
    struct address add[5];

    for (int i = 0; i < 4; i++)
    {
        printf("enter the details of person %d \n", i + 1);
        printf("House_NO :\n");
        scanf("%d", &add[i].house);
        printf("Block_NO :\n");
        scanf("%d", &add[i].block);
        printf("City :\n");
        scanf("%s", &add[i].city);
        printf("State :\n");
        scanf("%s", &add[i].state);
    }

    for(int i=0;i<4;i++)
    {
        printAdd(add[i]);
    }
    return 0;
}