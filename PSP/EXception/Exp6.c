//Function without argument,with return type

//You can also declare prototype in main
#include<stdio.h>
void main(){
    void udf(); //Function protype/declaration
    udf();
}
void udf(){
    printf("Hello!");//Function definition
}