/*
IMP and TRICKY
WAP in c to display following output to check whether is it Prime or not.
*/
#include<stdio.h>
int main()
{
    int User_input,i=0;
    printf("Enter a number:");
    scanf("%d",&User_input);
    while (User_input>i)
    {
        if (User_input % 2 == 0)
        {
            printf("Number is not prime!");
        }
        else
        {
            printf("Number is prime!");
        }
        return 0;
    }

    printf("Plz enter a number greter then 0");
    return 1;
}