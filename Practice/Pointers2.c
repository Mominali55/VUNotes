//Demostration with "Call by refrence" with large structures.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

typedef struct fatboy
{
    char v[SIZE];
}c_fatboy;

int random(c_fatboy *hello)
{
    int i=0;
    while (1)
    {
        if(hello->v[i] == 42)
        {
            printf("42 is in position %d \n",i);
            break;
        }
        ++i;
    }
}

int main(){
    c_fatboy hello;
    srand(time(NULL));
    //Just assing some values instead of just garbage
    for (int i = 0; i < SIZE; i++) hello.v[i] = i;
    hello.v[rand() % SIZE] = 42;
    random(&hello);
}



