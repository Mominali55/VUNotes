//Performing all Arthematic Operations using Pointers
#include<stdio.h>

//Prototype
void post_inc();
void add(int arr[]);
void sub(int arr2[]);
void sub_of_2ptr();


int main(){
    post_inc();
}

void post_inc()
{
    printf("\n[1]--Incrementing the Address--\n");
    int a[]={10,20,30,40,50,60,70,80}; 
    int *p = &a[0];
    
    //[1] Post- increment
    printf("%d \n",*(++p)); 
    printf("%d \n",*p);

    //[2]Changing value of index 
    printf("%d\n",((*p)+2)); 

    /*
    Note:
    1Same Goes for decremnt..Always be careful while declaring parenthesis as the complier follows "Bodmas Rules"
    2.Whenever you increment the base address also changes.
    */
    add(a);
}

void add(int arr[])
{
    printf("\n[2]--Adding address--\n");
    int *p=arr;
    //[1] Adding addredess
    printf("%d\n",*(p+1));
    sub(arr);
}

void sub(int arr2[])
{
    printf("\n[3]--Subtracting address--\n");
    int *p=arr2;
    p=&arr2[3];

    //[1] Subtracting address
    p=p-3;
    printf("%d\n",*(p));

    /*
    Note:
    1.Intially we have to set the value to a perticular location/Index to perform arthemetci operation.
    2.If not set it will lead to segmentation fault.
    */

    sub_of_2ptr();
}

void sub_of_2ptr()
{
    printf("\n[4]--Subtraction of two pointers--\n");
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    // VALID: Both point to 'a'
    int *p = &a[0]; // Points to 1st element
    int *q = &a[5]; // Points to 6th element (Value 6)

    // Calculation: Index 5 - Index 0 = 5
    printf("Distance: %ld\n", (q - p)); 
}


