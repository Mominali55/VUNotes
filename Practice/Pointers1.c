//Demostration with "Call by Value" with large structures.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

typedef struct fatboy
{
    char v[SIZE];
}c_fatboy;

int random(c_fatboy hello)
{
    int i=0;
    while (1)
    {
        if(hello.v[i] == 42)
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

    /*
    Here we are first generating a random slot for the number 42 by using fixed "SIZE" is 50 
    The remainder is will always be betwwen 1 - 49
    */
    hello.v[rand() % SIZE] = 42;
    random(hello);
}

