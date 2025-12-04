#include<stdio.h>
int main(){
    int a[]={10,20,30}; 
    int *p = &a[0];
    printf("%d \n",*(++p)); //Here first it got decrement means the add now have been changed
    printf("%d \n",*p);
    return 0;
}