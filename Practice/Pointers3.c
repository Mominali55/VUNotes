//Changing pointers data-type by changing where they point..
#include<stdio.h>

int main(){
    int nb;
    int *ptr;

    nb = 42;
    ptr = &nb;

    printf("%d %0.60f \n", //%e for scientific notation
            *ptr,
            *(float *)ptr);
            return 0;
}