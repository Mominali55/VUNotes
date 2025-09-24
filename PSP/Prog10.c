/*
Using while loop
*/
#include<stdio.h>
int main()
{
    int i=10;
    while (i>0)
    {
        printf("\nhello %d",i);
        // Or you can declare i value here
        // Eg:- "printf("%d",i)"
        i--;
    }
    return 0;

}