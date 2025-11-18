//Function with array as parameter
#include<stdio.h>
void fun(int arr[]);

void main(){
    int arr[5],i;
    printf("Enter 5 elements in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr);  //Here we dont have to declare bracktes as arr it_self has values now.. 
}
void fun(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n Array values=%d",arr[i]);
    }
    
}
