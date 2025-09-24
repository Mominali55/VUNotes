//Goto statement
#include<stdio.h>
int main()
{
    int i;
    i=1;
    printf("\n hello..");
    momin:
    printf("\n hi");
    printf("\n %d", i);
    i++;
    if(i<=5)
    {
        goto momin; //goto statement
    }
    return 0;
}