#include<stdio.h>

//Fuction to print different data types using void pointers
int printdata(void *data,char datatype){
    if (datatype == 'i')
        printf("Inetger %d\n", (*(int*)data));
    else if(datatype == 'f')
        printf("Inetger %f\n", (*(float*)data));
    else if(datatype == 'c')
        printf("Inetger %c\n", (*(char*)data));
    else
        printf("Unkown datatype...\n");

}

int main(){
    int intvalue = 42;
    printdata(&intvalue,'i');
    printdata(&intvalue,'f');
    printdata(&intvalue,'c');
}
/*
This program uses the concept of void pointers and also used the concept that we learned,
form "pointer3.c" program where you changed the data type by this crptic notation *(datatype *)pointer
*/