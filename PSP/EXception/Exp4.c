//The limit of integers in Turbo C
//In turbo C the limit of integer is -32768 to 32767 int (2 bytes)
//In modern compilers the limit of integer is -2147483648 to 2147483647 int (4 bytes)
//Program to count number of digits in an integer using do-while loop
#include <stdio.h>
int main()
{
    int num;
    int count=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    do
    {
        num=num/10;
        count++;
    } while (num!=0);
    printf("The number of digits is: %d \n", count);
    return 0;
    
}