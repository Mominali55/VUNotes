#include<stdio.h>
int factorial(int n);

int main(){
    int n,number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    n = factorial(number);
    printf("Factorial = %d",n);
}
int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}