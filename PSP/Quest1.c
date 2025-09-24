/*
WAP in c to accept three numbers from user and display greatest number among them.
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);

    if (a>=b && a>=c)
    {
        printf("A is the greatest one!:%d",a);
    }
    else if (b>=a && b>=c)
    {
        printf("B is the greatest one!:%d",b);
    }
    else
    {
        printf("C is the greatest one!:%d",c);
    }
    
}