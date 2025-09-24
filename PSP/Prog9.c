/*
Using of switch case
*/
#include<stdio.h>
int main()
{
    int Day_no=1;
    // Day_no=1
    switch (Day_no)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day number\n");
        break;
    }
    return 0;
}