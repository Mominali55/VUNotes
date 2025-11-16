//By running this program will result in an error due to void does not provide any return type

#include<stdio.h>
void funadd(int p,int q);

void main(){
    int x,y,res;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    res=funadd(x,y);
    printf("Result=%d",res);
}
void funadd(int a,int b){
    int c;
    c=a+b;
    return c;
}

