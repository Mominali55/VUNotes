/*
WAP in c to display 1 to 50 numbers using while loops
*/
#include<stdio.h>
int main()
{
    int Number=1;//To start with one
    while (Number<=50)
    {
        printf("%d \n",Number);
        Number++;
    }
    return 0;
}