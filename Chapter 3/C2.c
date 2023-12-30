#include<stdio.h>

int main()
{
    /*
    int day;
    printf("enter day(1-7) \n");
    scanf("%d",&day);

    switch (day){
        case 1:
        printf("Monday \n");
        break;

        case 2:
        printf("Tuesday \n");
        break;

        case 3:
        printf("Wednesday \n");
        break;

        case 4:
        printf("Thursday \n");
        break;

        case 5:
        printf("Friday \n");
        break;

        case 6:
        printf("Saturday \n");
        break;

        case 7:
        printf("Sunday \n");
        break;

        default:
        printf("Not a valid day! \n");
    }
    */

    char day2;
    printf("enter day2(1-7) \n");
    scanf("%c",&day2);

    switch (day2){
        case 'm':
        printf("Monday \n");
        break;

        case 't':
        printf("Tuesday \n");
        break;

        case 'w':
        printf("Wednesday \n");
        break;

        case 'T':
        printf("Thursday \n");
        break;

        case 'f':
        printf("Friday \n");
        break;

        case 's':
        printf("Saturday \n");
        break;

        case 'S':
        printf("Sunday \n");
        break;

        default:
        printf("Not a valid day! \n");
    }


    return 0;
}