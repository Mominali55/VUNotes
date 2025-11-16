#include<stdio.h>
int i=60;
void funadd();
void udf();
void main(){
    int x,y;
    funadd();
    printf("\n fun 1 finished execution");
    udf();
    printf("\n value of i after funn cell is %d",i);
    funadd();
}
void funadd(){
    printf("\n i from funadd =%d ",i);
}
void udf(){
    i++;
    printf("\n i=%d", i);
}