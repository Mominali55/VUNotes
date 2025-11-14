//Starting with a function
#include<stdio.h>
void fun();

//Void main is also user defined function
void main(){
    fun();
    printf("\n We are back in main");
}
void fun(){
    printf("\n User-defined function \n ");
}