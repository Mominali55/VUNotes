//Storages in c 
//Also use of extern in C
#include<stdio.h>
#include"ProgT33.c"
int count;
extern void hello();

void main()
{
    count=5;
    printf("Count in main is %d\n",count);
    hello();
    fun();
}
void fun()
{
    count++;
    printf("Count in fun is %d\n",count);
}