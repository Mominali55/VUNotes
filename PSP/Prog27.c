//Nesting of Function

//Declaring Function Proto-type in both main() and outside main()
#include<stdio.h>
void fun1();

void main(){
    void fun2(); 
    fun2();
    printf("\n Main Execuation");
}
void fun2(){
    printf("\n Hello");
    fun1();
    printf("\n Fun2 Finished execution");
}
void fun1(){
    printf("\n i am in another function");
}