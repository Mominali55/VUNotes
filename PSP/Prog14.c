/*
Using "Goto"
*/
#include<stdio.h>
int main()
{
    int i;
    i=1;
    printf("\n Helloo");
    momin:
    printf("\n hiii");
    printf("\n %d",i);
    i++;
    if(i<=5)
    {
        goto momin;
    }
    return 0;
}