//similar to Pointers3.c
#include<stdio.h>

int main(){
    int nb;
    int *ptr;

    nb = 0b100000000;
    ptr = &nb;

    printf("%d %c\n",
            *ptr,
            *(char *)ptr);
            return 0;
}
